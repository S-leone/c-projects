#include <iostream>
using namespace std;

int main()
{
    int num1,num2;

    cout <<"enter the first integer:";
    cin >> num1;

    cout <<"enter the second integer:";
    cin >> num2;

    int max =(num1 >num2) ? num1 : num2;

    cout <<"The maximum of the two numbers is:" << max;

    return 0;
}