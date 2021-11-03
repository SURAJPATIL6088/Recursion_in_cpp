// calculate a^n using recursion

#include<iostream>
using namespace std;

int power(int a, int n)
{
    // if anything raise to zero it equals to 1  (a^0= 1)
    if(n == 0)
    {
        return 1;
    }
    else
    {
        return (a* power(a, n-1));
    }
}

int main()
{
    int a, n;
    cout<<"Enter the Base Value : ";
    cin>>a;

    cout<<"Enter the exponent Value : ";
    cin>>n;

    cout<<power(a, n);

    return 0;
}