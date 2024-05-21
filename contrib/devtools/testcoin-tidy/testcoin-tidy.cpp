// Copyright (c) 2023 Testcoin Developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "logprintf.h"

#include <clang-tidy/ClangTidyModule.h>
#include <clang-tidy/ClangTidyModuleRegistry.h>

class TestcoinModule final : public clang::tidy::ClangTidyModule
{
public:
    void addCheckFactories(clang::tidy::ClangTidyCheckFactories& CheckFactories) override
    {
        CheckFactories.registerCheck<testcoin::LogPrintfCheck>("testcoin-unterminated-logprintf");
    }
};

static clang::tidy::ClangTidyModuleRegistry::Add<TestcoinModule>
    X("testcoin-module", "Adds testcoin checks.");

volatile int TestcoinModuleAnchorSource = 0;
