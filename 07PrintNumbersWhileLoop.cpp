//c++ program to print n numbers using while loop
#include<iostream>
using namespace std;
int main()
{
    int n,i=1;
    cout<<"Enter range of numbers you want to print: ";
    cin>>n;
    while(i<=n)
    {
        cout<<i<<endl;
        i++;
    }
    return 0;
}
