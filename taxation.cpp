#include <iostream>
using namespace std;

int main() {
    double grossSalary, netSalary, tax =0.0;

    cout<<"Enter your gross salary:";
    cin>> grossSalary;

    if(grossSalary <=10000) {
        tax =0.0;
    } else if (grossSalary <=30000){
        tax =0.5;
    } else if (grossSalary <=50000){
        tax =0.10;
    } else if (grossSalary <=70000){
        tax =0.13;
    } else {
        tax =0.15;
    }
    netSalary=grossSalary - (grossSalary * tax);

    cout <<"Net Salary after tax deduction: $" << netSalary << endl;

    return 0;
}