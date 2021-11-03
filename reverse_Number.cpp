#include<iostream>
using namespace std;

int reverse(int n)
{
    // condition for single digit
    if(n/10 == 0)
    {
        return n;
    }
    else
    {
      cout<<(n%10);
        reverse(n/10);  
    }    
        
}

int main()
{
    int num;
    cout<<"Enter the number : ";
    cin>>num;

    cout<<reverse(num);

    return 0;
}