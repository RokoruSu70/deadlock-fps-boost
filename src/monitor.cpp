// monitor.cpp — part of deadlock-fps-boost.

#include "deadlockfpsboost/monitor.h"

#include <cstdio>

namespace deadlockfpsboost {

Monitor::Monitor(const std::string& config_path)
    : config_path_(config_path) {}

void Monitor::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Monitor::run() {
    if (verbose_) std::fprintf(stderr, "[deadlock-fps-boost] monitor: run\n");
    // core logic lives here
    return true;
}

}  // namespace deadlockfpsboost
