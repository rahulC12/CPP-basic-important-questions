#include<iostream>
using namespace std;
int main()
{
    string str="GeeksGeeksForGeeks";
    for(int i=0;str[i]!='\0';i++)
    {
        if(islower(str[i]))
        {
           str[i]=toupper(str[i]);
        }
        else if(isupper(str[i])){
                str[i]=tolower(str[i]);
        }
    }
    cout<<"Toggle is"<<str;
    return 0;
}