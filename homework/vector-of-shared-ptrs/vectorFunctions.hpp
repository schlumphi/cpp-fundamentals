#pragma once
#include <memory>
#include <vector>

auto generate(const int count) -> std::vector<std::shared_ptr<int>>;

auto print(const std::vector<std::shared_ptr<int>>& data) -> void;

auto add10(const std::vector<std::shared_ptr<int>>& data) -> void;

auto sub10(int* const data) -> void;

auto sub10(const std::vector<std::shared_ptr<int>>& data) -> void;
