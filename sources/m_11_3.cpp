//
// Created by Jollu Emil
//


#include <string>
#include <regex>

bool isValidIP(const std::string &ip) {
    const std::regex pattern("^((25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)\\.){3}(25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)$");
    return std::regex_match(ip, pattern);
}
