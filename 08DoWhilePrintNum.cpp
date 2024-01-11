//c++ program to print numbers using do while loop
#include<iostream>
using namespace std;
int main()
{
    int n,i=1;
    cout<<"Enter range of numbers you want to print: ";
    cin>>n;
    do
    {
        cout<<i<<endl;
        i++;
    }
    while(i<0);
    return 0;
}
