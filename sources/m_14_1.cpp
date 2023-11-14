//
// Created by Jollu Emil
//


// Задание 1. Банкетный стол

#include <vector>

#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

// Функция для изменения массива
vector<vector<int>> changeArray(vector<vector<int>> personsArray) ;

// Функция для вывода массива
void printArray(const vector<vector<int>>& personsArray);

// Юнит-тесты
void test() {
    vector<vector<int>> personsArray = {{8, 6, 6, 6, 6, 6},
                                        {8, 6, 6, 6, 6, 6}};
    vector<vector<int>> changedArray = changeArray(personsArray);
    assert(changedArray[0][4] == 7);
    assert(changedArray[1][0] == 6);
    cout << "Все тесты прошли успешно.\n";
}

int main() {
    vector<vector<int>> personsArray = {{8, 6, 6, 6, 6, 6},
                                        {8, 6, 6, 6, 6, 6}};
    personsArray = changeArray(personsArray);
    printArray(personsArray);
    test();
    return 0;
}
