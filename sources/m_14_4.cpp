//
// Created by Jollu Emil
//


// Задание 4. Умножение матрицы на вектор

#include <iostream>
#include <sstream>

using std::cout;
using std::endl;

void matrixFill(int arr[][4], int size, int data[][4]);
bool EqualMatrixs(int arrA[][4], int arrB[][4], int size);
std::string printMatrix(int arr[][4], int size){
    std::ostringstream oss;

   // поток ostringstream для теста. если хотите вывод на консоль, просто поменяйте на std::cout

    return oss.str();
}

int main()
{
    int matrixA[4][4];
    int matrixB[4][4];
    int dataA[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    int dataB[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};

    matrixFill(matrixA, 4, dataA);
    matrixFill(matrixB, 4, dataB);

    if(EqualMatrixs(matrixA, matrixB, 4)){
        cout << "matrix A is equal to matrix B" << endl;
        printMatrix(matrixB, 4);
    }else{
        cout << "matrix A is not equal to matrix B" << endl;
    }
    return 0;
}




