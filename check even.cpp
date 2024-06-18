#include <iostream>

bool checkEven(int num) {
    return num % 2 == 0;
}

int main() {
    int number;
    std::cout<<"input number\n";
    std::cin>>number;
    if (checkEven(number)) {
        std::cout << number << " is even.";
    } else {
        std::cout << number << " is odd.";
    }
    return 0;
}