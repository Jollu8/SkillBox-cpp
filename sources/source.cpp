//
// Created by Jollu Emil
//

#include <iostream>
#include <vector>


namespace m_13 {

    // Module 13 task3
    std::vector<int> data(20);
    void print(int &index) {
        for (int i = 0; i < index; ++i) {
            std::cout << data[i] << ' ';
        }
        std::cout << '\n';
    }

    void add(int value, int &index ) {
        if (value == -1) {
            print(index);
        } else {
            if (index == 20) {
                for (int i = 0; i < 19; ++i) {
                    data[i] = data[i + 1] ;
                }
                data[19] = value;
            } else {
                data[index++] = value;
            }
        }
    }
}