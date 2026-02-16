#include "validation.hpp"
#include <algorithm>
#include <cctype>

auto getErrorMessage(const ErrorCode error) -> std::string_view {
    return error_messages.at(error);
}

auto doPasswordsMatch(std::string_view lhs, std::string_view rhs) -> bool {
    return lhs.compare(rhs);
}

auto checkPasswordRules(std::string_view password) -> ErrorCode {
    if (password.size() < MIN_PASSWORD_LEN) {
        return ErrorCode::PasswordNeedsAtLeastNineCharacters;
    }
    if (std::none_of(password.begin(), password.end(), [](unsigned char c) { return std::isdigit(c); })) {
        return ErrorCode::PasswordNeedsAtLeastOneNumber;
    }
    if (std::none_of(password.begin(), password.end(), [](unsigned char c) { return std::ispunct(c); })) {
        return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
    }
    if (std::none_of(password.begin(), password.end(), [](unsigned char c) { return std::isupper(c); })) {
        return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
    }
    return ErrorCode::Ok;
}

auto checkPassword(std::string_view lhs, std::string_view rhs) -> ErrorCode {
    if (doPasswordsMatch(lhs, rhs)) {
        return checkPasswordRules(lhs);
    } else {
        return ErrorCode::PasswordsDoNotMatch;
    }
}
