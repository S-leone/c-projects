#include <iostream>
using namespace std;
int main() {
    int start = 125;
    int end = 415;
    int sum = 0;
    int num = start;
    while (num <= end) {
        sum += num; 
        num++; 
    }
     cout << "The sum of integers from " << start << " to " << end << " is: " << sum <<endl;
    
    return 0;
}