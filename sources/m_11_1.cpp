//
// Created by Jollu Emil
//

#include <iostream>
#include <string>

char shiftChar(char c, int shift) {
    if (!isalpha(c))
        return c;

    char offset = isupper(c) ? 'A' : 'a';
    return (c - offset + shift) % 26 + offset;
}

std::string encryptCaesar(const std::string &text, int shift) {
    std::string result;
    for (char c : text) {
        result += shiftChar(c, shift);
    }
    return result;
}

std::string decryptCaesar(const std::string &text, int shift) {
    return encryptCaesar(text, 26 - shift);
}