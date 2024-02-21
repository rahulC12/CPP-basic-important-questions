#include <string.h>
#include<iostream>
using namespace std;
void sive(int n)
{
    bool prime[n+1];
    memset(prime,true,sizeof(prime));
    for(int p=2;p*p<=n;p++)
    {
        if(prime[p]==true)
        {
        for(int i=p*p;i<=n;i+=p)
          prime[i]=false;
        }
    }
    for(int p=2;p<=n;p++)
       if(prime[p])
       cout<<p<<" ";
    

}
int main()
{
    int n=30;
    cout<<"prime numbers are"<<endl;
    sive(n);
    return 0;
}