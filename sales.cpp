#include <iostream>

int main() {

    double sales = 95000; // $95000
    const double state_taxRate = 4; // 4%
    const double county_taxRate = 2; // 2%

    double state_tax = (95000 / 100) * state_taxRate;

    double county_tax = (95000 / 100) * county_taxRate;

    double Total_tax = state_tax + county_tax;

    std::cout << "The Sales is: $" << sales << std::endl;

    std::cout << "The state Tax is: $" << state_tax << std::endl;

    std::cout << "The county Tax is: $" << county_tax << std::endl;

    std::cout << "The total Tax is: $" << Total_tax << std::endl;

    return 0;
; 

}