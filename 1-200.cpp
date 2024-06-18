#include <iostream>
int sumEven(int num) {
    if (num == 0) {
        return 0;
    } else {
        if (num % 2 == 0) {
            return num + sumEven(num - 1);
        } else {
            return sumEven(num - 1);
        }
    }
}
int main() {
    int result = sumEven(200);
    std::cout << "Sum of even numbers between 1 and 200: " << result << std::endl;
    return 0;
}