#include <iostream>
using namespace std;
int main() {
    int array[10];
    cout << "Enter 10 integers:\n";
    for (int i = 0; i < 10; ++i) {
        cin >> array[i];
    }
    
    cout << "Values in the array:\n";
    for (int i = 0; i < 10; ++i) {
        cout << array[i] << " ";
    }
    
    int searchValue;
    int count = 0;
    
    cout << "\nEnter an integer to search in the array: ";
    cin >> searchValue;
    
    for (int i = 0; i < 10; ++i) {
        if (array[i] == searchValue) {
            count++;
        }
    }
    
    cout << "The value " << searchValue << " appears " << count << " times in the array.\n";
    
    return 0;
}
