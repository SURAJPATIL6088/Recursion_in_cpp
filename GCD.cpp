#include<iostream>
using namespace std;

int GCD(int a, int b)
{
    if(b == 0)
    {
        return a;
    }

    if(a == 0)
    {
        return b;
    }

    if(a>b)
    {
        return GCD(a-b, b);
    }
    else
    {
        return GCD(a, b-a);
    }
    // End of the GCD()
}

int main()
{
    int a, b;
    cout<<"Enter First Value A : ";
    cin>>a;

    cout<<"Enter Second Value B : ";
    cin>>b;

    cout<<GCD(a,b);
    return 0;
}