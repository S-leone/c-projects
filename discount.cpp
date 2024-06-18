#include <iostream>
using namespace std;

int main(){
    double totalValue, discount;

    std::cout <<"Enter the total value of purchases: ";
    std::cin >> totalValue;
    
    if (totalValue > 30000) {
        discount = 0.10 * totalValue;
    } else {
        discount = 0.02 * totalValue;
    }

    std::cout <<"the discount received is: Ksh " << discount << std::endl;

    return 0;

}