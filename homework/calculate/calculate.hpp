#pragma once
#include <string>

auto add(const int lhs, const int rhs) -> std::string {
    return std::to_string(lhs + rhs);
}

auto subtract(const int lhs, const int rhs) -> std::string {
    return std::to_string(lhs - rhs);
}

auto multiply(const int lhs, const int rhs) -> std::string {
    return std::to_string(lhs * rhs);
}

auto divide(const int lhs, const int rhs) -> std::string {
    if (rhs != 0) {
        return std::to_string(lhs / rhs);
    }
    return "Division by 0";
}

std::string calculate(const std::string& command, int first, int second) {
    if (command == "add") {
        return add(first, second);
    } else if (command == "subtract") {
        return subtract(first, second);
    } else if (command == "multiply") {
        return multiply(first, second);
    } else if (command == "divide") {
        return divide(first, second);
    }
    return "Invalid data";
}
