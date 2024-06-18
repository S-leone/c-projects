#include<iostream>
using namespace std;
int main()
{
    int day;
    cout<<"Choose a day of the week\n";
    cout<<" 1.Sunday\n 2.Monday\n 3.Tuesday\n 4.Wednesday\n 5.Thursday\n 6.Friday\n 7.Saturday\n";
    cin>>day;
switch(day)
{
case 1:
cout<<"Activity is Play/movie ";
break;
case 2:
cout<<"Activity is Swimming ";
break;
case 3:
cout<<"Activity is Soccer ";
break;
case 4:
cout<<"Activity is Swimming ";
break;
case 5:
cout<<"Activity is Table tennis ";
break;
case 6:
cout<<"Activity is Table tennis ";
break;
case 7:
cout<<"Activity is Hike ";
break;
default:
cout<<"Invalid input ";
break;
}
system("pause");
return 0;
}
    

