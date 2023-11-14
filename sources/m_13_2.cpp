//
// Created by Jollu Emil
//


#include <iostream>
#include <vector>

float calculateTotalCost(const std::vector<float>& prices, const std::vector<int>& items);

int main() {
    std::vector<float> prices {2.5, 4.25, 3.0, 10.0};
    std::vector<int> items {1, 1, 0, 3};

    float totalCost = calculateTotalCost(prices, items);
    std::cout << "Суммарная стоимость: " << totalCost << std::endl;

    return 0;
}
