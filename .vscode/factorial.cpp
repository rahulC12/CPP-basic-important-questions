#include<iostream>
using namespace std;
int main()
{
    int n;
    long fact=1.0;
    cout<<"Enter the number";
    cin>>n;
    if(n<0)
    {
        cout<<"Factorial does not exist";

    }
    else{
        for(int i=1;i<=n;i++)
        {
            fact*=i;
        }
        cout<<"Factorial of number is"<<fact;

    }
    return 0;
}