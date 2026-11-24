// tuner — part of deadlock-fps-boost.

#pragma once

#include <string>
#include <vector>

namespace deadlockfpsboost {

class Tuner {
public:
    explicit Tuner(const std::string& config_path);

    void configure(const std::string& key, const std::string& value);
    bool run();
    bool verbose() const { return verbose_; }

private:
    std::string config_path_;
    bool verbose_ = false;
};

}  // namespace deadlockfpsboost
