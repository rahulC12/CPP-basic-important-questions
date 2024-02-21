#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    if(b==0)
       return a;
    return gcd(b,a%b);
}
int lcm (int a,int b)
{
    int result=(a/gcd(a,b))*b;
    return result;
}
int main()
{
    int a=24,b=13;
    cout<<"LCM"<<lcm(a,b);
    return 0;
}