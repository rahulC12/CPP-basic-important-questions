#include<iostream>
#include<string>
using namespace std;
string removespace(string str)
{
    string result="";
    for(char c : str)
    {
        if(c!=' '){
            result+=c;
        }
    }
    return result;
}
int main()
{
    string str="Gfg To the moon";
    cout<<"without space "<<removespace(str);
    return 0;
}
