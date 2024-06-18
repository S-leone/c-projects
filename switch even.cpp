#include <iostream>
using namespace std;

int main() {
    int number;
    
    cout << "Enter an integer: ";
    cin >> number;
    
    switch(number % 2) {
        case 0:
            cout << number << " is an even number.";
            break;
        default :
        cout << number << " is an odd number.";
        break;

    }
    
    return 0;
}