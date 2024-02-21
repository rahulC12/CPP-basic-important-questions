#include<iostream>
using namespace std;
int palindrome(int n)
{
      int reverse=0;
    while(n>0)
    {
  
    int lastdigit=n%10;
    reverse=reverse*10+lastdigit;
    n=n/10;
    }
    return reverse;
    

}
int main()
{
    int n;
    cout<<"eneter the number";
    cin>>n;
    int sum=palindrome(n);
    if(n==sum)
    {
        cout<<"It is palindrome";
    }
    else{
        cout<<"It is not a palindrome";
    }
    return 0;

}