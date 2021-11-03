#include<iostream>
using namespace std;

int sum_of_n(int n)
{
    int sum;
    
     if(n == 0)
    {
        return 0;
    }
    else
    { 
        cout<<n<<" "; 
        return (n+sum_of_n(n-1));
    }
}

int main()
{
    int num;
    cout<<"Enter the Number : ";
    cin>>num;

    cout<<sum_of_n(num);
    return 0;

}