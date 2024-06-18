#include <iostream>
using namespace std;

int main()
{
    int age;
    cout <<"Enter the age in years ";
    cin >>age;
    if (age ==2)
    {
        cout <<"Nursery activity";
    }
    else if(age ==3)
    {
        cout <<"Bouncing castle activity";
    }
    else if (age ==4)
    {
        cout <<"Toy cars activity";
    }
    else 
    {
        cout <<"Invalid age";
    }
    return 0;
}
