#include "validation.hpp"

auto getErrorMessage(const ErrorCode error) -> std::string_view {
    return error_messages.at(error);
}
