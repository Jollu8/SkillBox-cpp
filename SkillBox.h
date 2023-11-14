//
/// Created by Jollu Emil
//


#include <iostream>
#include <string>
#include <regex>

#include <iostream>
#include <string>
#include <algorithm>
#include <cassert>


#include <iostream>

using namespace std;

void matrixFill(int arr[][4], int size, int data[][4]){

    for(int i =0; i < size; i++){
        for (int j = 0; j < size; j++)
        {
            arr[i][j] = data[i][j];
        }
    }
}

bool EqualMatrixs(int arrA[][4], int arrB[][4], int size){
    for(int i =0; i < size; i++){
        for (int j = 0; j < size; j++)
        {
            if(arrB[i][j] != arrA[i][j]) return false;
        }
    }

    return true;
}

std::string printMatrix(int arr[][4], int size){
    std::ostringstream oss;

    for(int i =0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            oss << arr[i][j] << " ";
        }
        oss << endl;
    }

    return oss.str();
}










