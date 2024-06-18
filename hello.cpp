#include <iostream>
#include <Windows.h>

void beep(int frequency, int duration) {
    Beep(frequency, duration);
}

int main() {
    std::cout << "Press any key to hear a beep. Press 'q' to quit." << std::endl;

    while (true) {
        if (GetAsyncKeyState('Q') & 0x8000) {
            break;
        }

        for (char c = 8; c <= 255; ++c) {
            if (GetAsyncKeyState(c) & 0x8000) {
                beep(1000, 200); // Change frequency and duration as desired
                std::cout << "Beep!" << std::endl;
            }
        }
    }

    return 0;
}
