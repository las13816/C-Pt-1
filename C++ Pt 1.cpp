#include <iostream>
#include <iomanip>

// Declare variables such as Sales tax, markup percentage,and the original and final price
double calculateFinalPrice(double originalPrice, double markupPercentage, double salesTaxRate) {
    double markupPercent = originalPrice * (markupPercentage / 100);
    double sellingPrice = originalPrice + markupPercent;
    double salesTax = sellingPrice * (salesTaxRate / 100);
    double finalPrice = sellingPrice + salesTax;

    // Return the final price value
    return finalPrice;
}
 // Create a function that gathers input, calculates final and selling price and outputs results
int main() {
    double originalPrice, markupPercentage, salesTaxRate;
    // Get input
    std::cout << "Original price: $";
    std::cin >> originalPrice;

    std::cout << "Markup percentage: ";
    std::cin >> markupPercentage;

    std::cout << "Sales tax: ";
    std::cin >> salesTaxRate;
    // Declare finalPrice variable with proper calculations 
    double finalPrice = calculateFinalPrice(originalPrice, markupPercentage, salesTaxRate);

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Original price: $" << originalPrice << std::endl;
    std::cout << "Markup percentage: " << markupPercentage << "%" << std::endl;
    std::cout << "Selling price: $" << originalPrice + (originalPrice * (markupPercentage / 100)) << std::endl;
    std::cout << "Sales tax: $" << (originalPrice + (originalPrice * (markupPercentage / 100))) * (salesTaxRate / 100) << std::endl;
    std::cout << "Final price: $" << finalPrice << std::endl;

    //Return value 
    return 0;
}