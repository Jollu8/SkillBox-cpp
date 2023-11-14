//
// Created by Jollu Emil
//

#include <sstream>

std::string runProgram(std::istringstream &input) {
    std::ostringstream output;
    std::string tenants[10];

    for (int i = 0; i < 10; ++i) {
        input >> tenants[i];
    }

    for (int i = 0; i < 3; ++i) {
        int flatNumber;
        input >> flatNumber;

        if (flatNumber >= 1 && flatNumber <= 10) {
            output << tenants[flatNumber - 1] << std::endl;
        } else {
            output << "Некорректный номер квартиры" << std::endl;
        }
    }

    return output.str();
}