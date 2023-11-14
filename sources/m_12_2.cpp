//
// Created by Jollu Emil
//


#include <iostream>
#include <algorithm>
#include <vector>

void runProgram(std::vector<double> &input) {
    std::sort(input.begin(), input.end());
}

int main() {
    std::vector<double> vec{
            1.2, 2.3, 1.11, 3.4, 5.5, 5.4, 5.3, 5.1, 1.5, 1.25, 5.41, 5.31, 5.11, 1.51, 1.251
    };
    runProgram(vec);
    for(auto i : vec) std::cout << i << " ";
}