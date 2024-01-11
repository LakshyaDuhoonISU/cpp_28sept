//c++ program to demonstrate use of switch loop
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number between 0 and 2: ";
    cin>>n;
    switch(n)
    {
        case 0:
        cout<<"Zero"<<endl;
        break;
        case 1:
        cout<<"One"<<endl;
        break;
        case 2:
        cout<<"Two"<<endl;
        break;
        default:
        cout<<"Invalid number"<<endl;
    }
    return 0;
}
