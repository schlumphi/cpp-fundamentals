#pragma once
#include <limits>
#include <vector>

int maxOfVector(const std::vector<int>& vec) {
    if (vec.empty()) {
        return std::numeric_limits<int>::min();
    }

    auto max(vec.front());
    for (const auto elem : vec) {
        if (elem >= max) {
            max = elem;
        }
    }
    return max;
}
