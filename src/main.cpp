// main.cpp — entry point. Wires config and subsystems together.

#include "deadlockfpsboost/settings.h"
#include "deadlockfpsboost/tuner.h"
#include "deadlockfpsboost/configs.h"
#include "deadlockfpsboost/monitor.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    deadlockfpsboost::Settings settings = deadlockfpsboost::Settings::load_default();
    deadlockfpsboost::Tuner tuner(settings.store_path);
    deadlockfpsboost::Configs configs(settings.store_path);
    deadlockfpsboost::Monitor monitor(settings.store_path);
    std::fprintf(stderr, "[deadlock-fps-boost] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
