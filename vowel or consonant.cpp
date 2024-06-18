#include <iostream>
using namespace std;

int main() {
    char letter;
    cout << "Enter an alphabet letter (MUST BE LOWERCASE): ";
    cin >> letter;

    switch(letter) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout << letter << " is a vowel.";
            break;
        default:
            cout << letter << " is a consonant.";
    }

    return 0;
}