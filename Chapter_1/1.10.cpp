#include <iostream>

int main() {
    // Vendor sells 6kg of grocery in 15 minutes
    const int GROCERY_SALES = 6;
    const int MINUTES = 15;

    // Calculate the average sale per hour in grams
    int salesInGrams = GROCERY_SALES * 1000;
    int hourlySales = salesInGrams * (MINUTES * 4);

    // Display results
    std::cout << "Average sales in 15 minutes: " << GROCERY_SALES << "kg" << std::endl;
    std::cout << "Average hourly sales in grams: " << hourlySales << "g" << std::endl;

    return 0;
}
