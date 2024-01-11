//c++ program to perform logical operations on user given numbers to give largest number
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;
    if(a>=b && a>=c)
    {
        cout<<a<<" is the largest number"<<endl;
    }
    else if (b>=a && b>=c)
    {
        cout<<b<<" is the largest number"<<endl;
    }
    else
    {
        cout<<c<<" is the largest number"<<endl;
    }
    return 0;
}
