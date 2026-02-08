#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
    if (count < 1) {
        return {};
    }

    std::vector<int> result(count);
    auto next{step};
    for (auto& elem : result) {
        elem = next;
        next += step;
    }

    return result;
}
