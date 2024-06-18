#include <iostream>

int main() {
    for (int i = 6; i <= 38; i++) {
        if (i == 21) {
            continue;
        }
        if (i % 2 != 0) {
            std::cout << i << " ";
        }
    }

    return 0;
}
