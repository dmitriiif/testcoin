# Libraries

| Name                     | Description |
|--------------------------|-------------|
| *libtestcoin_cli*         | RPC client functionality used by *testcoin-cli* executable |
| *libtestcoin_common*      | Home for common functionality shared by different executables and libraries. Similar to *libtestcoin_util*, but higher-level (see [Dependencies](#dependencies)). |
| *libtestcoin_consensus*   | Stable, backwards-compatible consensus functionality used by *libtestcoin_node* and *libtestcoin_wallet*. |
| *libtestcoin_kernel*      | Consensus engine and support library used for validation by *libtestcoin_node*. |
| *libtestcoinqt*           | GUI functionality used by *testcoin-qt* and *testcoin-gui* executables. |
| *libtestcoin_ipc*         | IPC functionality used by *testcoin-node*, *testcoin-wallet*, *testcoin-gui* executables to communicate when [`--enable-multiprocess`](multiprocess.md) is used. |
| *libtestcoin_node*        | P2P and RPC server functionality used by *testcoind* and *testcoin-qt* executables. |
| *libtestcoin_util*        | Home for common functionality shared by different executables and libraries. Similar to *libtestcoin_common*, but lower-level (see [Dependencies](#dependencies)). |
| *libtestcoin_wallet*      | Wallet functionality used by *testcoind* and *testcoin-wallet* executables. |
| *libtestcoin_wallet_tool* | Lower-level wallet functionality used by *testcoin-wallet* executable. |
| *libtestcoin_zmq*         | [ZeroMQ](../zmq.md) functionality used by *testcoind* and *testcoin-qt* executables. |

## Conventions

- Most libraries are internal libraries and have APIs which are completely unstable! There are few or no restrictions on backwards compatibility or rules about external dependencies. An exception is *libtestcoin_kernel*, which, at some future point, will have a documented external interface.

- Generally each library should have a corresponding source directory and namespace. Source code organization is a work in progress, so it is true that some namespaces are applied inconsistently, and if you look at [`libtestcoin_*_SOURCES`](../../src/Makefile.am) lists you can see that many libraries pull in files from outside their source directory. But when working with libraries, it is good to follow a consistent pattern like:

  - *libtestcoin_node* code lives in `src/node/` in the `node::` namespace
  - *libtestcoin_wallet* code lives in `src/wallet/` in the `wallet::` namespace
  - *libtestcoin_ipc* code lives in `src/ipc/` in the `ipc::` namespace
  - *libtestcoin_util* code lives in `src/util/` in the `util::` namespace
  - *libtestcoin_consensus* code lives in `src/consensus/` in the `Consensus::` namespace

## Dependencies

- Libraries should minimize what other libraries they depend on, and only reference symbols following the arrows shown in the dependency graph below:

<table><tr><td>

```mermaid

%%{ init : { "flowchart" : { "curve" : "basis" }}}%%

graph TD;

testcoin-cli[testcoin-cli]-->libtestcoin_cli;

testcoind[testcoind]-->libtestcoin_node;
testcoind[testcoind]-->libtestcoin_wallet;

testcoin-qt[testcoin-qt]-->libtestcoin_node;
testcoin-qt[testcoin-qt]-->libtestcoinqt;
testcoin-qt[testcoin-qt]-->libtestcoin_wallet;

testcoin-wallet[testcoin-wallet]-->libtestcoin_wallet;
testcoin-wallet[testcoin-wallet]-->libtestcoin_wallet_tool;

libtestcoin_cli-->libtestcoin_util;
libtestcoin_cli-->libtestcoin_common;

libtestcoin_common-->libtestcoin_consensus;
libtestcoin_common-->libtestcoin_util;

libtestcoin_kernel-->libtestcoin_consensus;
libtestcoin_kernel-->libtestcoin_util;

libtestcoin_node-->libtestcoin_consensus;
libtestcoin_node-->libtestcoin_kernel;
libtestcoin_node-->libtestcoin_common;
libtestcoin_node-->libtestcoin_util;

libtestcoinqt-->libtestcoin_common;
libtestcoinqt-->libtestcoin_util;

libtestcoin_wallet-->libtestcoin_common;
libtestcoin_wallet-->libtestcoin_util;

libtestcoin_wallet_tool-->libtestcoin_wallet;
libtestcoin_wallet_tool-->libtestcoin_util;

classDef bold stroke-width:2px, font-weight:bold, font-size: smaller;
class testcoin-qt,testcoind,testcoin-cli,testcoin-wallet bold
```
</td></tr><tr><td>

**Dependency graph**. Arrows show linker symbol dependencies. *Consensus* lib depends on nothing. *Util* lib is depended on by everything. *Kernel* lib depends only on consensus and util.

</td></tr></table>

- The graph shows what _linker symbols_ (functions and variables) from each library other libraries can call and reference directly, but it is not a call graph. For example, there is no arrow connecting *libtestcoin_wallet* and *libtestcoin_node* libraries, because these libraries are intended to be modular and not depend on each other's internal implementation details. But wallet code is still able to call node code indirectly through the `interfaces::Chain` abstract class in [`interfaces/chain.h`](../../src/interfaces/chain.h) and node code calls wallet code through the `interfaces::ChainClient` and `interfaces::Chain::Notifications` abstract classes in the same file. In general, defining abstract classes in [`src/interfaces/`](../../src/interfaces/) can be a convenient way of avoiding unwanted direct dependencies or circular dependencies between libraries.

- *libtestcoin_consensus* should be a standalone dependency that any library can depend on, and it should not depend on any other libraries itself.

- *libtestcoin_util* should also be a standalone dependency that any library can depend on, and it should not depend on other internal libraries.

- *libtestcoin_common* should serve a similar function as *libtestcoin_util* and be a place for miscellaneous code used by various daemon, GUI, and CLI applications and libraries to live. It should not depend on anything other than *libtestcoin_util* and *libtestcoin_consensus*. The boundary between _util_ and _common_ is a little fuzzy but historically _util_ has been used for more generic, lower-level things like parsing hex, and _common_ has been used for testcoin-specific, higher-level things like parsing base58. The difference between util and common is mostly important because *libtestcoin_kernel* is not supposed to depend on *libtestcoin_common*, only *libtestcoin_util*. In general, if it is ever unclear whether it is better to add code to *util* or *common*, it is probably better to add it to *common* unless it is very generically useful or useful particularly to include in the kernel.


- *libtestcoin_kernel* should only depend on *libtestcoin_util* and *libtestcoin_consensus*.

- The only thing that should depend on *libtestcoin_kernel* internally should be *libtestcoin_node*. GUI and wallet libraries *libtestcoinqt* and *libtestcoin_wallet* in particular should not depend on *libtestcoin_kernel* and the unneeded functionality it would pull in, like block validation. To the extent that GUI and wallet code need scripting and signing functionality, they should be get able it from *libtestcoin_consensus*, *libtestcoin_common*, and *libtestcoin_util*, instead of *libtestcoin_kernel*.

- GUI, node, and wallet code internal implementations should all be independent of each other, and the *libtestcoinqt*, *libtestcoin_node*, *libtestcoin_wallet* libraries should never reference each other's symbols. They should only call each other through [`src/interfaces/`](../../src/interfaces/) abstract interfaces.

## Work in progress

- Validation code is moving from *libtestcoin_node* to *libtestcoin_kernel* as part of [The libtestcoinkernel Project #24303](https://github.com/testcoin/testcoin/issues/24303)
- Source code organization is discussed in general in [Library source code organization #15732](https://github.com/testcoin/testcoin/issues/15732)
