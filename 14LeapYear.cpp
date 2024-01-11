//c++ program to calculate whether a given year is a leap year using logical operators
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a year: ";
    cin>>n;
    if ((n%4==0 && n%100!=0)||(n%400==0))
    {
        cout<<n<<" is a leap year"<<endl;
    }
    else
    {
        cout<<n<<" is not a leap year"<<endl;
    }
    return 0;
}
