#include<iostream>
#include<math.h>
using namespace std;
int count(int n)
{
    int total=0;
    while(n>0)
    {
        n=n/10;
        total++;
    }
    return total;
}
int armstrong(int n)
{
    int reverse=0;
    int original=n;
    while(n>0)
    {
        int lastdigit=n%10;
        reverse=reverse+pow(lastdigit,count(original));
        n=n/10;
    }
    return reverse;
    
}
int main()
{
    int n;
    cout<<"Enter the number";
    cin>>n;
    int sum=armstrong(n);
    if(sum==n)
    {
        cout<<n<<" Is a armstrong"<<endl;
    }
    else{
        cout<<n<<" is not a armstrong"<<endl;
    }
    return 0;
}