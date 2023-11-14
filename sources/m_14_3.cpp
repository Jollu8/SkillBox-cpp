//
// Created by Jollu Emil
//

/// Задание 3. Матрицы

#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

// Функция для заполнения и вывода матрицы
vector<vector<int>> fillAndPrintMatrix(int n) ;

// Юнит-тесты
void test() {
    vector<vector<int>> matrix = fillAndPrintMatrix(5);
    assert(matrix[0][0] == 0);
    assert(matrix[0][1] == 1);
    assert(matrix[0][2] == 2);
    assert(matrix[0][3] == 3);
    assert(matrix[0][4] == 4);
    assert(matrix[1][0] == 9);
    assert(matrix[1][1] == 8);
    assert(matrix[1][2] == 7);
    assert(matrix[1][3] == 6);
    assert(matrix[1][4] == 5);
    cout << "Все тесты прошли успешно.\n";
}

int main() {
    test();
    return 0;
}