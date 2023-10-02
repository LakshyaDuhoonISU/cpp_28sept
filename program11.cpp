//c++ program to demonstrate use of for loop to find a factorial of a number
#include<iostream>
using namespace std;
int main()
{
    int n,fact=1;
    cout<<"Enter a number to find it's factorial: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        fact*=i;
    }
    cout<<"Factorial of "<<n<<" is "<<fact<<endl;
    return 0;
}
