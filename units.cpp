#include <iostream>
using namespace std;

int main() {
    int units;
    double total_bill = 0;

    cout <<"Enter the total units of electricity consumed: ";
    cin >> units;

    if(units <= 50){
        total_bill = units * 0.50;
    } else if (units <= 150){
        total_bill = 50 *0.50 +(units - 50) * 0.75;
    } else if (units <= 250){
        total_bill = 50 * 0.50 + 100 * 0.75 + (units - 150)* 1.20;
    } else {
        total_bill = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (units - 250)* 1.50;
    }
    total_bill += total_bill * 0.20; // Adding 20% surcharge

    cout <<"Total electricity bill: Ksh. " << total_bill << endl;

    return 0;

}