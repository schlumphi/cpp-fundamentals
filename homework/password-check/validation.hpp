#pragma once
#include <map>
#include <string_view>

enum class ErrorCode {
    Ok,
    PasswordNeedsAtLeastNineCharacters,
    PasswordNeedsAtLeastOneNumber,
    PasswordNeedsAtLeastOneSpecialCharacter,
    PasswordNeedsAtLeastOneUppercaseLetter,
    PasswordsDoNotMatch
};

inline const std::map<const ErrorCode, std::string_view> error_messages{
    {ErrorCode::Ok, "Ok"},
    {ErrorCode::PasswordNeedsAtLeastNineCharacters, "Password needs to have at least nine characters"},
    {ErrorCode::PasswordNeedsAtLeastOneNumber, "Password needs to have at least one number"},
    {ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter, "Password needs to have at least one special character"},
    {ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter, "Password needs to have at least one uppercase letter"},
    {ErrorCode::PasswordsDoNotMatch, "Passwords do not match"}};

auto getErrorMessage(const ErrorCode error) -> std::string;
