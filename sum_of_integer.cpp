#include<iostream>
using namespace std;

int sum_of_integer(int num)
{
    int sum;

    if(num/10 == 0)
    {
        return num;
    }
    else
    {
        sum_of_integer(num/10);
        return (num % 10 + sum_of_integer(num/10));
    }
}

int main()
{
    int n;
    cout<<"Enter the Number : ";
    cin>>n;

    cout<<sum_of_integer(n);

    return 0;
}