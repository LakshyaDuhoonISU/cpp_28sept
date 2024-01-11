//c++ program to demonstrate use of continue statement
#include<iostream>
using namespace std;
int main()
{
    int i=0;
    while(i<=10)
    {
        if(i==4)
        {
            continue;
        }
        cout<<i<<endl;
        i++;
    }
    return 0;
}
