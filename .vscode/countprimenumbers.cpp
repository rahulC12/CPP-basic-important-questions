#include<iostream>
using namespace std;
bool isprime(int n)
{
if(n<=0)
return false;
for(int i=2;i<n;i++)
{
    if(n%i==0)
    {
        return false;

    }
return true;
}
}
int countprime(int s,int e)
{
    int count=0;
    for(int i=s;i<e;i++)
    {
        if(isprime(i))
        {
            count++;
        }
    }
    return count;
    
}
int main()
{
    int st=1,ed=10;
    cout<<"prime in range"<<countprime(st,ed);
    return 0;
}