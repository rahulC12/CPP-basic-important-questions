#include<iostream>
using namespace std;
int main()
{
    char n;
    cout<<"enter the number";
    cin>>n;
    if(n=='a'||n=='e'||n=='i'||n=='o'||n=='u'||n=='A'||n=='E'||n=='I'||n=='O'||n=='U')
    {
        cout<<"It is vowels";
    }
    else{
        cout<<"It is constant";
    }
    return 0;
}