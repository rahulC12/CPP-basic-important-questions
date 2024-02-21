#include<iostream>
using namespace std;
int main()
{
    int i,s,j,e,flag;
    cout<<"Enter the starting number";
    cin>>s;
    cout<<"Enter the last digit";
    cin>>e;
    cout<<"Prime numbers are=";
    for(i=s;i<=e;i++)
    {
        if(i==0||i==1)
        continue;
        flag=1;
        for(j=2;j<=i/2;++j)
        {
         if(i%j==0)
         {
            flag=0;
            break;
         }
    }
    if(flag==1)
    cout<<i<<" ";
    }
    return 0;
}