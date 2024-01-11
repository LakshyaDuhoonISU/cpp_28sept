//c++ program to get a number from the user and print whether it is a positive or negative number using if else loop
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if (n>0)
    {
        cout<<"Positive number"<<endl;
    }
    else
    {
        cout<<"Negative number"<<endl;
    }
    return 0;
}
