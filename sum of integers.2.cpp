#include <iostream>

int main() {
    int number, sum = 0;

    do {
        std::cout << "Enter an integer (input 0 then enter to stop): ";
        std::cin >> number;
        sum += number;
    } while (number != 0);

    std::cout << "The sum of the integers entered is: " << sum;

    return 0;
}
