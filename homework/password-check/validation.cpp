#include "validation.hpp"

auto getErrorMessage(const ErrorCode error) -> std::string_view {
    return error_messages.at(error);
}

auto doPasswordsMatch(std::string_view lhs, std::string_view rhs) -> bool {
    return lhs.compare(rhs);
}
