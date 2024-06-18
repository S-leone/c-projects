#include <iostream>

int main() {
    int number;
    int product = 1;
    std::cout << "(enter a negative number or zero to stop):" << std::endl;
    do {
        std::cout << "Enter a number :";
        std::cin >> number;
        if (number > 0) {
            product *= number;
        }
    } while (number > 0);

    std::cout << "The product of all positive entries is: " << product << std::endl;

    return 0;
}
