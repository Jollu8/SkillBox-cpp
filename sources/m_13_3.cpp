//
// Created by Jollu Emil
//

#include <iostream>
#include <vector>


std::vector<int> data(20);


void print(const int &index);

void add(int value, int & index);

int main() {
    int index{};
    for (int i = 1; i <= 20; ++i) {
        add(i, index);
    }
    add(-1, index);  // Должно вывести числа от 1 до 20
    add(21, index);
    add(22, index);
    add(23, index);
    add(-1, index);  // Должно вывести числа от 4 до 23
    return 0;
}

