#include<iostream>
using namespace std;

int divisible_by_9(int n)
{
    int sum_of_digits =0;

    if(n == 9)
    {
        return 1;
    }

    if (n< 9)
    {
        return 0;
    }

    while(n > 0)
    {
        sum_of_digits = sum_of_digits + n % 10;
        n = n/10; 
    }
    divisible_by_9(sum_of_digits);
}

int main()
{
    int n;
    cout<<"Enter the Integer Value : ";
    cin>>n;

    cout<<divisible_by_9(n);
    return 0;
}