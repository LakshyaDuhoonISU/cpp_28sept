//c++ program to perform different relational operations on user given numbers
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    if (a==b)
    {
        cout<<"Both numbers are equal"<<endl;
    }
    else 
    {
        if (a>b)
        {
            cout<<a<<" is greater than "<<b<<endl;
        }
        else
        {
            cout<<b<<" is greater than "<<a<<endl;
        }
    }
}