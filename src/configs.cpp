// configs.cpp — part of deadlock-fps-boost.

#include "deadlockfpsboost/configs.h"

#include <cstdio>

namespace deadlockfpsboost {

Configs::Configs(const std::string& config_path)
    : config_path_(config_path) {}

void Configs::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Configs::run() {
    if (verbose_) std::fprintf(stderr, "[deadlock-fps-boost] configs: run\n");
    // core logic lives here
    return true;
}

}  // namespace deadlockfpsboost
