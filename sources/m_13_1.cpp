//
// Created by Jollu Emil
//

#include <iostream>
#include <vector>

std::vector<int> fillVec(int n);
void removeElements(std::vector<int>& vec, int x);

int main() {
    int n;
    std::cout << "Введите размер вектора: ";
    std::cin >> n;

    std::vector<int> vec = fillVec(n);


    int x;
    std::cout << "Введите число для удаления: ";
    std::cin >> x;

    removeElements(vec, x);

    std::cout << "Результат: ";
    for (const auto& num : vec) {
        std::cout << num << ' ';
    }

    return 0;
}
