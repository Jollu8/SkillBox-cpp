//
// Created by Jollu Emil on 11/13/23.
//
#include <regex>


bool isValidEmail(const std::string &email) {
    const std::regex pattern("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");
    return std::regex_match(email, pattern);
}