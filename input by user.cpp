#include <iostream>
using namespace std;
int main() {
    int num;

    cout <<"Enter the amount of times to output the statement:";
    cin >> num;
    for(int i = 0; i < num; i++) {
    cout << "C++ programming is fun" <<endl;
    }

    return 0;
}