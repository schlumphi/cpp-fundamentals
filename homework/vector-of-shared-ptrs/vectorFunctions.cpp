#include "vectorFunctions.hpp"

auto generate(const int count) -> std::vector<std::shared_ptr<int>> {
    std::vector<std::shared_ptr<int>> result(count);

    auto num = 0;
    for (auto& elem : result) {
        elem = std::make_shared<int>(num++);
    }
    return result;
}

auto print(const std::vector<std::shared_ptr<int>>& data) -> void;

auto add10(const std::vector<std::shared_ptr<int>>& data) -> void;

auto sub10(int* const data) -> void;

auto sub10(const std::vector<std::shared_ptr<int>>& data) -> void;
