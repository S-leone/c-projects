#include <iostream>
using namespace std;

int main () {
    int days = 0;
    int savings = 0;
    int deposit = 2;

     while (days < 6) {
        savings += deposit;
        deposit *= 2;
        days ++;
     }
        cout <<"The total amount of money saved in 6 days is " << savings << " shillings " <<endl;
    
     return 0;
}