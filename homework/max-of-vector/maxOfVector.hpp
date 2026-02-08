#pragma once
#include <limits>
#include <vector>

int maxOfVector(const std::vector<int>& vec) {
    auto max(vec.front());
    for (const auto elem : vec) {
        if (elem >= max) {
            max = elem;
        }
    }
    return max;
}
