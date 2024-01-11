//c++ program to perform different arithmetic operations on variables
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"Addition of "<<a<<" and "<<b<<": "<<a+b<<endl;
    cout<<"Subtraction of "<<a<<" and "<<b<<": "<<a-b<<endl;
    cout<<"Multiplication of "<<a<<" and "<<b<<": "<<a*b<<endl;
    cout<<"Division of "<<a<<" and "<<b<<": "<<a/b<<endl;
    cout<<"Remainder of "<<a<<" and "<<b<<": "<<a%b<<endl;
    cout<<"AND operator result of "<<a<<" and "<<b<<": "<<(a&&b)<<endl;
    cout<<"OR operator result of "<<a<<" and "<<b<<": "<<(a||b)<<endl;
    c=!(a&&b);
    cout<<"NOT AND operator result of "<<a<<" and "<<b<<": "<<c<<endl;
    return 0;
}
