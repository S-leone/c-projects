#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int ages[size];

    cout << "Enter " << size << " values for the array:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> ages[i];
    }

    cout << "Values of the array in reverse order:" << endl;
    for (int i = size - 1; i >= 0; --i) {
        cout << ages[i] << " ";
    }

    return 0;
}
