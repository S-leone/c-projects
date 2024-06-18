#include <iostream>

int main() {
    int nums[10];

    std::cout << "Enter 10 integer values:\n";
    for (int i = 0; i < 10; ++i) {
        std::cin >> nums[i];
    }

    int temp = nums[0];
    nums[0] = nums[9];
    nums[9] = temp;

    std::cout << "Array after swapping first and last elements:\n";
    for (int i = 0; i < 10; ++i) {
        std::cout << nums[i] << " ";
    }

    return 0;
}