

#include <QtGlobal>

// Automatically generated by extract_strings_qt.py
#ifdef __GNUC__
#define UNUSED __attribute__((unused))
#else
#define UNUSED
#endif
static const char UNUSED *testcoin_strings[] = {
QT_TRANSLATE_NOOP("testcoin-core", "The %s developers"),
QT_TRANSLATE_NOOP("testcoin-core", ""
"%s corrupt. Try using the wallet tool testcoin-wallet to salvage or restoring "
"a backup."),
QT_TRANSLATE_NOOP("testcoin-core", ""
"%s failed to validate the -assumeutxo snapshot state. This indicates a "
"hardware problem, or a bug in the software, or a bad software modification "
"that allowed an invalid snapshot to be loaded. As a result of this, the node "
"will shut down and stop using any state that was built on the snapshot, "
"resetting the chain height from %d to %d. On the next restart, the node will "
"resume syncing from %d without using any snapshot data. Please report this "
"incident to %s, including how you obtained the snapshot. The invalid "
"snapshot chainstate will be left on disk in case it is helpful in diagnosing "
"the issue that caused this error."),
QT_TRANSLATE_NOOP("testcoin-core", ""
"%s is set very high! Fees this large could be paid on a single transaction."),
QT_TRANSLATE_NOOP("testcoin-core", ""
"%s request to listen on port %u. This port is considered \"bad\" and thus it "
"is unlikely that any peer will connect to it. See doc/p2p-bad-ports.md for "
"details and a full list."),
QT_TRANSLATE_NOOP("testcoin-core", ""
"Cannot downgrade wallet from version %i to version %i. Wallet version "
"unchanged."),
QT_TRANSLATE_NOOP("testcoin-core", ""
"Cannot obtain a lock on data directory %s. %s is probably already running."),
QT_TRANSLATE_NOOP("testcoin-core", ""
"Cannot provide specific connections and have addrman find outgoing "
"connections at the same time."),
QT_TRANSLATE_NOOP("testcoin-core", ""
"Cannot upgrade a non HD split wallet from version %i to version %i without "
"upgrading to support pre-split keypool. Please use version %i or no version "
"specified."),
QT_TRANSLATE_NOOP("testcoin-core", ""
"Disk space for %s may not accommodate the block files. Approximately %u GB "
"of data will be stored in this directory."),
QT_TRANSLATE_NOOP("testcoin-core", ""
"Distributed under the MIT software license, see the accompanying file %s or "
"%s"),
QT_TRANSLATE_NOOP("testcoin-core", ""
"Error loading %s: External signer wallet being loaded without external "
"signer support compiled"),
QT_TRANSLATE_NOOP("testcoin-core", ""
"Error loading wallet. Wallet requires blocks to be downloaded, and software "
"does not currently support loading wallets while blocks are being downloaded "
"out of order when using assumeutxo snapshots. Wallet should be able to load "
"successfully after node sync reaches height %s"),
QT_TRANSLATE_NOOP("testcoin-core", ""
"Error reading %s! All keys read correctly, but transaction data or address "
"metadata may be missing or incorrect."),
QT_TRANSLATE_NOOP("testcoin-core", ""
"Error reading %s! Transaction data may be missing or incorrect. Rescanning "
"wallet."),
QT_TRANSLATE_NOOP("testcoin-core", ""
"Error: Address book data in wallet cannot be identified to belong to "
"migrated wallets"),
QT_TRANSLATE_NOOP("testcoin-core", ""
"Error: Dumpfile format record is incorrect. Got \"%s\", expected \"format\"."),
QT_TRANSLATE_NOOP("testcoin-core", ""
"Error: Dumpfile identifier record is incorrect. Got \"%s\", expected \"%s\"."),
QT_TRANSLATE_NOOP("testcoin-core", ""
"Error: Dumpfile version is not supported. This version of testcoin-wallet "
"only supports version 1 dumpfiles. Got dumpfile with version %s"),
QT_TRANSLATE_NOOP("testcoin-core", ""
"Error: Duplicate descriptors created during migration. Your wallet may be "
"corrupted."),
QT_TRANSLATE_NOOP("testcoin-core", ""
"Error: Legacy wallets only support the \"legacy\", \"p2sh-segwit\", and "
"\"bech32\" address types"),
QT_TRANSLATE_NOOP("testcoin-core", ""
"Error: Transaction %s in wallet cannot be identified to belong to migrated "
"wallets"),
QT_TRANSLATE_NOOP("testcoin-core", ""
"Error: Unable to produce descriptors for this legacy wallet. Make sure to "
"provide the wallet's passphrase if it is encrypted."),
QT_TRANSLATE_NOOP("testcoin-core", ""
"Failed to calculate bump fees, because unconfirmed UTXOs depend on enormous "
"cluster of unconfirmed transactions."),
QT_TRANSLATE_NOOP("testcoin-core", ""
"Failed to rename invalid peers.dat file. Please move or delete it and try "
"again."),
QT_TRANSLATE_NOOP("testcoin-core", ""
"Fee estimation failed. Fallbackfee is disabled. Wait a few blocks or enable "
"%s."),
QT_TRANSLATE_NOOP("testcoin-core", ""
"File %s already exists. If you are sure this is what you want, move it out "
"of the way first."),
QT_TRANSLATE_NOOP("testcoin-core", ""
"Incompatible options: -dnsseed=1 was explicitly specified, but -onlynet "
"forbids connections to IPv4/IPv6"),
QT_TRANSLATE_NOOP("testcoin-core", ""
"Invalid amount for %s=<amount>: '%s' (must be at least the minrelay fee of "
"%s to prevent stuck transactions)"),
QT_TRANSLATE_NOOP("testcoin-core", ""
"Invalid or corrupt peers.dat (%s). If you believe this is a bug, please "
"report it to %s. As a workaround, you can move the file (%s) out of the way "
"(rename, move, or delete) to have a new one created on the next start."),
QT_TRANSLATE_NOOP("testcoin-core", ""
"More than one onion bind address is provided. Using %s for the automatically "
"created Tor onion service."),
QT_TRANSLATE_NOOP("testcoin-core", ""
"No dump file provided. To use createfromdump, -dumpfile=<filename> must be "
"provided."),
QT_TRANSLATE_NOOP("testcoin-core", ""
"No dump file provided. To use dump, -dumpfile=<filename> must be provided."),
QT_TRANSLATE_NOOP("testcoin-core", ""
"No wallet file format provided. To use createfromdump, -format=<format> must "
"be provided."),
QT_TRANSLATE_NOOP("testcoin-core", ""
"Outbound connections restricted to CJDNS (-onlynet=cjdns) but -"
"cjdnsreachable is not provided"),
QT_TRANSLATE_NOOP("testcoin-core", ""
"Outbound connections restricted to Tor (-onlynet=onion) but the proxy for "
"reaching the Tor network is explicitly forbidden: -onion=0"),
QT_TRANSLATE_NOOP("testcoin-core", ""
"Outbound connections restricted to Tor (-onlynet=onion) but the proxy for "
"reaching the Tor network is not provided: none of -proxy, -onion or -"
"listenonion is given"),
QT_TRANSLATE_NOOP("testcoin-core", ""
"Outbound connections restricted to i2p (-onlynet=i2p) but -i2psam is not "
"provided"),
QT_TRANSLATE_NOOP("testcoin-core", ""
"Please check that your computer's date and time are correct! If your clock "
"is wrong, %s will not work properly."),
QT_TRANSLATE_NOOP("testcoin-core", ""
"Please contribute if you find %s useful. Visit %s for further information "
"about the software."),
QT_TRANSLATE_NOOP("testcoin-core", ""
"Prune configured below the minimum of %d MiB.  Please use a higher number."),
QT_TRANSLATE_NOOP("testcoin-core", ""
"Prune mode is incompatible with -reindex-chainstate. Use full -reindex "
"instead."),
QT_TRANSLATE_NOOP("testcoin-core", ""
"Prune: last wallet synchronisation goes beyond pruned data. You need to -"
"reindex (download the whole blockchain again in case of pruned node)"),
QT_TRANSLATE_NOOP("testcoin-core", ""
"Rename of '%s' -> '%s' failed. You should resolve this by manually moving or "
"deleting the invalid snapshot directory %s, otherwise you will encounter the "
"same error again on the next startup."),
QT_TRANSLATE_NOOP("testcoin-core", ""
"SQLiteDatabase: Unknown sqlite wallet schema version %d. Only version %d is "
"supported"),
QT_TRANSLATE_NOOP("testcoin-core", ""
"The block database contains a block which appears to be from the future. "
"This may be due to your computer's date and time being set incorrectly. Only "
"rebuild the block database if you are sure that your computer's date and "
"time are correct"),
QT_TRANSLATE_NOOP("testcoin-core", ""
"The inputs size exceeds the maximum weight. Please try sending a smaller "
"amount or manually consolidating your wallet's UTXOs"),
QT_TRANSLATE_NOOP("testcoin-core", ""
"The preselected coins total amount does not cover the transaction target. "
"Please allow other inputs to be automatically selected or include more coins "
"manually"),
QT_TRANSLATE_NOOP("testcoin-core", ""
"The transaction amount is too small to send after the fee has been deducted"),
QT_TRANSLATE_NOOP("testcoin-core", ""
"This error could occur if this wallet was not shutdown cleanly and was last "
"loaded using a build with a newer version of Berkeley DB. If so, please use "
"the software that last loaded this wallet"),
QT_TRANSLATE_NOOP("testcoin-core", ""
"This is a pre-release test build - use at your own risk - do not use for "
"mining or merchant applications"),
QT_TRANSLATE_NOOP("testcoin-core", ""
"This is the maximum transaction fee you pay (in addition to the normal fee) "
"to prioritize partial spend avoidance over regular coin selection."),
QT_TRANSLATE_NOOP("testcoin-core", ""
"This is the transaction fee you may discard if change is smaller than dust "
"at this level"),
QT_TRANSLATE_NOOP("testcoin-core", ""
"This is the transaction fee you may pay when fee estimates are not available."),
QT_TRANSLATE_NOOP("testcoin-core", ""
"Total length of network version string (%i) exceeds maximum length (%i). "
"Reduce the number or size of uacomments."),
QT_TRANSLATE_NOOP("testcoin-core", ""
"Transaction requires one destination of non-0 value, a non-0 feerate, or a "
"pre-selected input"),
QT_TRANSLATE_NOOP("testcoin-core", ""
"UTXO snapshot failed to validate. Restart to resume normal initial block "
"download, or try loading a different snapshot."),
QT_TRANSLATE_NOOP("testcoin-core", ""
"Unable to replay blocks. You will need to rebuild the database using -"
"reindex-chainstate."),
QT_TRANSLATE_NOOP("testcoin-core", ""
"Unconfirmed UTXOs are available, but spending them creates a chain of "
"transactions that will be rejected by the mempool"),
QT_TRANSLATE_NOOP("testcoin-core", ""
"Unexpected legacy entry in descriptor wallet found. Loading wallet %s\n"
"\n"
"The wallet might have been tampered with or created with malicious intent.\n"),
QT_TRANSLATE_NOOP("testcoin-core", ""
"Unknown wallet file format \"%s\" provided. Please provide one of \"bdb\" or "
"\"sqlite\"."),
QT_TRANSLATE_NOOP("testcoin-core", ""
"Unrecognized descriptor found. Loading wallet %s\n"
"\n"
"The wallet might had been created on a newer version.\n"
"Please try running the latest software version.\n"),
QT_TRANSLATE_NOOP("testcoin-core", ""
"Unsupported category-specific logging level %1$s=%2$s. Expected "
"%1$s=<category>:<loglevel>. Valid categories: %3$s. Valid loglevels: %4$s."),
QT_TRANSLATE_NOOP("testcoin-core", ""
"Unsupported chainstate database format found. Please restart with -reindex-"
"chainstate. This will rebuild the chainstate database."),
QT_TRANSLATE_NOOP("testcoin-core", ""
"Wallet created successfully. The legacy wallet type is being deprecated and "
"support for creating and opening legacy wallets will be removed in the "
"future."),
QT_TRANSLATE_NOOP("testcoin-core", ""
"Wallet loaded successfully. The legacy wallet type is being deprecated and "
"support for creating and opening legacy wallets will be removed in the "
"future. Legacy wallets can be migrated to a descriptor wallet with "
"migratewallet."),
QT_TRANSLATE_NOOP("testcoin-core", ""
"Warning: Dumpfile wallet format \"%s\" does not match command line specified "
"format \"%s\"."),
QT_TRANSLATE_NOOP("testcoin-core", ""
"Warning: Private keys detected in wallet {%s} with disabled private keys"),
QT_TRANSLATE_NOOP("testcoin-core", ""
"Warning: We do not appear to fully agree with our peers! You may need to "
"upgrade, or other nodes may need to upgrade."),
QT_TRANSLATE_NOOP("testcoin-core", ""
"Witness data for blocks after height %d requires validation. Please restart "
"with -reindex."),
QT_TRANSLATE_NOOP("testcoin-core", ""
"You need to rebuild the database using -reindex to go back to unpruned "
"mode.  This will redownload the entire blockchain"),
QT_TRANSLATE_NOOP("testcoin-core", ""
"\n"
"Unable to cleanup failed migration"),
QT_TRANSLATE_NOOP("testcoin-core", ""
"\n"
"Unable to restore backup of wallet."),
QT_TRANSLATE_NOOP("testcoin-core", "%s is set very high!"),
QT_TRANSLATE_NOOP("testcoin-core", "-maxmempool must be at least %d MB"),
QT_TRANSLATE_NOOP("testcoin-core", "A fatal internal error occurred, see debug.log for details"),
QT_TRANSLATE_NOOP("testcoin-core", "Block verification was interrupted"),
QT_TRANSLATE_NOOP("testcoin-core", "Cannot resolve -%s address: '%s'"),
QT_TRANSLATE_NOOP("testcoin-core", "Cannot set -forcednsseed to true when setting -dnsseed to false."),
QT_TRANSLATE_NOOP("testcoin-core", "Cannot set -peerblockfilters without -blockfilterindex."),
QT_TRANSLATE_NOOP("testcoin-core", "Cannot write to data directory '%s'; check permissions."),
QT_TRANSLATE_NOOP("testcoin-core", "Config setting for %s only applied on %s network when in [%s] section."),
QT_TRANSLATE_NOOP("testcoin-core", "Copyright (C) %i-%i"),
QT_TRANSLATE_NOOP("testcoin-core", "Corrupted block database detected"),
QT_TRANSLATE_NOOP("testcoin-core", "Could not find asmap file %s"),
QT_TRANSLATE_NOOP("testcoin-core", "Could not parse asmap file %s"),
QT_TRANSLATE_NOOP("testcoin-core", "Disk space is too low!"),
QT_TRANSLATE_NOOP("testcoin-core", "Do you want to rebuild the block database now?"),
QT_TRANSLATE_NOOP("testcoin-core", "Done loading"),
QT_TRANSLATE_NOOP("testcoin-core", "Dump file %s does not exist."),
QT_TRANSLATE_NOOP("testcoin-core", "Error committing db txn for wallet transactions removal"),
QT_TRANSLATE_NOOP("testcoin-core", "Error creating %s"),
QT_TRANSLATE_NOOP("testcoin-core", "Error initializing block database"),
QT_TRANSLATE_NOOP("testcoin-core", "Error initializing wallet database environment %s!"),
QT_TRANSLATE_NOOP("testcoin-core", "Error loading %s"),
QT_TRANSLATE_NOOP("testcoin-core", "Error loading %s: Private keys can only be disabled during creation"),
QT_TRANSLATE_NOOP("testcoin-core", "Error loading %s: Wallet corrupted"),
QT_TRANSLATE_NOOP("testcoin-core", "Error loading %s: Wallet requires newer version of %s"),
QT_TRANSLATE_NOOP("testcoin-core", "Error loading block database"),
QT_TRANSLATE_NOOP("testcoin-core", "Error opening block database"),
QT_TRANSLATE_NOOP("testcoin-core", "Error reading configuration file: %s"),
QT_TRANSLATE_NOOP("testcoin-core", "Error reading from database, shutting down."),
QT_TRANSLATE_NOOP("testcoin-core", "Error reading next record from wallet database"),
QT_TRANSLATE_NOOP("testcoin-core", "Error starting db txn for wallet transactions removal"),
QT_TRANSLATE_NOOP("testcoin-core", "Error: Cannot extract destination from the generated scriptpubkey"),
QT_TRANSLATE_NOOP("testcoin-core", "Error: Could not add watchonly tx %s to watchonly wallet"),
QT_TRANSLATE_NOOP("testcoin-core", "Error: Could not delete watchonly transactions. "),
QT_TRANSLATE_NOOP("testcoin-core", "Error: Couldn't create cursor into database"),
QT_TRANSLATE_NOOP("testcoin-core", "Error: Disk space is low for %s"),
QT_TRANSLATE_NOOP("testcoin-core", "Error: Dumpfile checksum does not match. Computed %s, expected %s"),
QT_TRANSLATE_NOOP("testcoin-core", "Error: Failed to create new watchonly wallet"),
QT_TRANSLATE_NOOP("testcoin-core", "Error: Got key that was not hex: %s"),
QT_TRANSLATE_NOOP("testcoin-core", "Error: Got value that was not hex: %s"),
QT_TRANSLATE_NOOP("testcoin-core", "Error: Keypool ran out, please call keypoolrefill first"),
QT_TRANSLATE_NOOP("testcoin-core", "Error: Missing checksum"),
QT_TRANSLATE_NOOP("testcoin-core", "Error: No %s addresses available."),
QT_TRANSLATE_NOOP("testcoin-core", "Error: This wallet already uses SQLite"),
QT_TRANSLATE_NOOP("testcoin-core", "Error: This wallet is already a descriptor wallet"),
QT_TRANSLATE_NOOP("testcoin-core", "Error: Unable to begin reading all records in the database"),
QT_TRANSLATE_NOOP("testcoin-core", "Error: Unable to make a backup of your wallet"),
QT_TRANSLATE_NOOP("testcoin-core", "Error: Unable to parse version %u as a uint32_t"),
QT_TRANSLATE_NOOP("testcoin-core", "Error: Unable to read all records in the database"),
QT_TRANSLATE_NOOP("testcoin-core", "Error: Unable to read wallet's best block locator record"),
QT_TRANSLATE_NOOP("testcoin-core", "Error: Unable to remove watchonly address book data"),
QT_TRANSLATE_NOOP("testcoin-core", "Error: Unable to write record to new wallet"),
QT_TRANSLATE_NOOP("testcoin-core", "Error: Unable to write solvable wallet best block locator record"),
QT_TRANSLATE_NOOP("testcoin-core", "Error: Unable to write watchonly wallet best block locator record"),
QT_TRANSLATE_NOOP("testcoin-core", "Error: address book copy failed for wallet %s"),
QT_TRANSLATE_NOOP("testcoin-core", "Error: database transaction cannot be executed for wallet %s"),
QT_TRANSLATE_NOOP("testcoin-core", "Failed to listen on any port. Use -listen=0 if you want this."),
QT_TRANSLATE_NOOP("testcoin-core", "Failed to rescan the wallet during initialization"),
QT_TRANSLATE_NOOP("testcoin-core", "Failed to start indexes, shutting down.."),
QT_TRANSLATE_NOOP("testcoin-core", "Failed to verify database"),
QT_TRANSLATE_NOOP("testcoin-core", "Failure removing transaction: %s"),
QT_TRANSLATE_NOOP("testcoin-core", "Fee rate (%s) is lower than the minimum fee rate setting (%s)"),
QT_TRANSLATE_NOOP("testcoin-core", "Ignoring duplicate -wallet %s."),
QT_TRANSLATE_NOOP("testcoin-core", "Importing…"),
QT_TRANSLATE_NOOP("testcoin-core", "Incorrect or no genesis block found. Wrong datadir for network?"),
QT_TRANSLATE_NOOP("testcoin-core", "Initialization sanity check failed. %s is shutting down."),
QT_TRANSLATE_NOOP("testcoin-core", "Input not found or already spent"),
QT_TRANSLATE_NOOP("testcoin-core", "Insufficient dbcache for block verification"),
QT_TRANSLATE_NOOP("testcoin-core", "Insufficient funds"),
QT_TRANSLATE_NOOP("testcoin-core", "Invalid -i2psam address or hostname: '%s'"),
QT_TRANSLATE_NOOP("testcoin-core", "Invalid -onion address or hostname: '%s'"),
QT_TRANSLATE_NOOP("testcoin-core", "Invalid -proxy address or hostname: '%s'"),
QT_TRANSLATE_NOOP("testcoin-core", "Invalid P2P permission: '%s'"),
QT_TRANSLATE_NOOP("testcoin-core", "Invalid amount for %s=<amount>: '%s' (must be at least %s)"),
QT_TRANSLATE_NOOP("testcoin-core", "Invalid amount for %s=<amount>: '%s'"),
QT_TRANSLATE_NOOP("testcoin-core", "Invalid amount for -%s=<amount>: '%s'"),
QT_TRANSLATE_NOOP("testcoin-core", "Invalid netmask specified in -whitelist: '%s'"),
QT_TRANSLATE_NOOP("testcoin-core", "Invalid port specified in %s: '%s'"),
QT_TRANSLATE_NOOP("testcoin-core", "Invalid pre-selected input %s"),
QT_TRANSLATE_NOOP("testcoin-core", "Listening for incoming connections failed (listen returned error %s)"),
QT_TRANSLATE_NOOP("testcoin-core", "Loading P2P addresses…"),
QT_TRANSLATE_NOOP("testcoin-core", "Loading banlist…"),
QT_TRANSLATE_NOOP("testcoin-core", "Loading block index…"),
QT_TRANSLATE_NOOP("testcoin-core", "Loading wallet…"),
QT_TRANSLATE_NOOP("testcoin-core", "Missing amount"),
QT_TRANSLATE_NOOP("testcoin-core", "Missing solving data for estimating transaction size"),
QT_TRANSLATE_NOOP("testcoin-core", "Need to specify a port with -whitebind: '%s'"),
QT_TRANSLATE_NOOP("testcoin-core", "No addresses available"),
QT_TRANSLATE_NOOP("testcoin-core", "Not enough file descriptors available."),
QT_TRANSLATE_NOOP("testcoin-core", "Not found pre-selected input %s"),
QT_TRANSLATE_NOOP("testcoin-core", "Not solvable pre-selected input %s"),
QT_TRANSLATE_NOOP("testcoin-core", "Prune cannot be configured with a negative value."),
QT_TRANSLATE_NOOP("testcoin-core", "Prune mode is incompatible with -txindex."),
QT_TRANSLATE_NOOP("testcoin-core", "Pruning blockstore…"),
QT_TRANSLATE_NOOP("testcoin-core", "Reducing -maxconnections from %d to %d, because of system limitations."),
QT_TRANSLATE_NOOP("testcoin-core", "Replaying blocks…"),
QT_TRANSLATE_NOOP("testcoin-core", "Rescanning…"),
QT_TRANSLATE_NOOP("testcoin-core", "SQLiteDatabase: Failed to execute statement to verify database: %s"),
QT_TRANSLATE_NOOP("testcoin-core", "SQLiteDatabase: Failed to prepare statement to verify database: %s"),
QT_TRANSLATE_NOOP("testcoin-core", "SQLiteDatabase: Failed to read database verification error: %s"),
QT_TRANSLATE_NOOP("testcoin-core", "SQLiteDatabase: Unexpected application id. Expected %u, got %u"),
QT_TRANSLATE_NOOP("testcoin-core", "Section [%s] is not recognized."),
QT_TRANSLATE_NOOP("testcoin-core", "Settings file could not be read"),
QT_TRANSLATE_NOOP("testcoin-core", "Settings file could not be written"),
QT_TRANSLATE_NOOP("testcoin-core", "Signing transaction failed"),
QT_TRANSLATE_NOOP("testcoin-core", "Specified -walletdir \"%s\" does not exist"),
QT_TRANSLATE_NOOP("testcoin-core", "Specified -walletdir \"%s\" is a relative path"),
QT_TRANSLATE_NOOP("testcoin-core", "Specified -walletdir \"%s\" is not a directory"),
QT_TRANSLATE_NOOP("testcoin-core", "Specified blocks directory \"%s\" does not exist."),
QT_TRANSLATE_NOOP("testcoin-core", "Specified data directory \"%s\" does not exist."),
QT_TRANSLATE_NOOP("testcoin-core", "Starting network threads…"),
QT_TRANSLATE_NOOP("testcoin-core", "The source code is available from %s."),
QT_TRANSLATE_NOOP("testcoin-core", "The specified config file %s does not exist"),
QT_TRANSLATE_NOOP("testcoin-core", "The transaction amount is too small to pay the fee"),
QT_TRANSLATE_NOOP("testcoin-core", "The wallet will avoid paying less than the minimum relay fee."),
QT_TRANSLATE_NOOP("testcoin-core", "This is experimental software."),
QT_TRANSLATE_NOOP("testcoin-core", "This is the minimum transaction fee you pay on every transaction."),
QT_TRANSLATE_NOOP("testcoin-core", "This is the transaction fee you will pay if you send a transaction."),
QT_TRANSLATE_NOOP("testcoin-core", "Transaction %s does not belong to this wallet"),
QT_TRANSLATE_NOOP("testcoin-core", "Transaction amount too small"),
QT_TRANSLATE_NOOP("testcoin-core", "Transaction amounts must not be negative"),
QT_TRANSLATE_NOOP("testcoin-core", "Transaction change output index out of range"),
QT_TRANSLATE_NOOP("testcoin-core", "Transaction must have at least one recipient"),
QT_TRANSLATE_NOOP("testcoin-core", "Transaction needs a change address, but we can't generate it."),
QT_TRANSLATE_NOOP("testcoin-core", "Transaction too large"),
QT_TRANSLATE_NOOP("testcoin-core", "Unable to allocate memory for -maxsigcachesize: '%s' MiB"),
QT_TRANSLATE_NOOP("testcoin-core", "Unable to bind to %s on this computer (bind returned error %s)"),
QT_TRANSLATE_NOOP("testcoin-core", "Unable to bind to %s on this computer. %s is probably already running."),
QT_TRANSLATE_NOOP("testcoin-core", "Unable to create the PID file '%s': %s"),
QT_TRANSLATE_NOOP("testcoin-core", "Unable to find UTXO for external input"),
QT_TRANSLATE_NOOP("testcoin-core", "Unable to generate initial keys"),
QT_TRANSLATE_NOOP("testcoin-core", "Unable to generate keys"),
QT_TRANSLATE_NOOP("testcoin-core", "Unable to open %s for writing"),
QT_TRANSLATE_NOOP("testcoin-core", "Unable to parse -maxuploadtarget: '%s'"),
QT_TRANSLATE_NOOP("testcoin-core", "Unable to start HTTP server. See debug log for details."),
QT_TRANSLATE_NOOP("testcoin-core", "Unable to unload the wallet before migrating"),
QT_TRANSLATE_NOOP("testcoin-core", "Unknown -blockfilterindex value %s."),
QT_TRANSLATE_NOOP("testcoin-core", "Unknown address type '%s'"),
QT_TRANSLATE_NOOP("testcoin-core", "Unknown change type '%s'"),
QT_TRANSLATE_NOOP("testcoin-core", "Unknown network specified in -onlynet: '%s'"),
QT_TRANSLATE_NOOP("testcoin-core", "Unknown new rules activated (versionbit %i)"),
QT_TRANSLATE_NOOP("testcoin-core", "Unsupported global logging level %s=%s. Valid values: %s."),
QT_TRANSLATE_NOOP("testcoin-core", "Unsupported logging category %s=%s."),
QT_TRANSLATE_NOOP("testcoin-core", "User Agent comment (%s) contains unsafe characters."),
QT_TRANSLATE_NOOP("testcoin-core", "Verifying blocks…"),
QT_TRANSLATE_NOOP("testcoin-core", "Verifying wallet(s)…"),
QT_TRANSLATE_NOOP("testcoin-core", "Wallet file creation failed: %s"),
QT_TRANSLATE_NOOP("testcoin-core", "Wallet needed to be rewritten: restart %s to complete"),
QT_TRANSLATE_NOOP("testcoin-core", "acceptstalefeeestimates is not supported on %s chain."),
};