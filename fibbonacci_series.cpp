#include<iostream>
using namespace std;

int fibonacci(int n)
{
    if(n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return (fibonacci(n-1) + fibonacci(n-2));
    }
    // end of fibonacci() 
}

int main()
{
    int n;
    cout<<"Enter the NUmber : ";
    cin>>n;

    // it will give fibonacci series
    for( int i= 0; i<n; i++)
    {
        cout<<fibonacci(i)<<" ";
    }
    return 0;
}