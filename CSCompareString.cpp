#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string s1, s2;
    cout<<"Enter two strings"<<endl;
    cin>>s1>>s2;
    int i=0;
    while(i<s1.size())
    {
        if(s1[i]!=s2[i])
        {
            break;
        }
        i++;
    }
    if(i==s1.size())
    {
        cout<<"These strings are same"<<endl;
    }
    else
    {
        cout<<"These strings are not same"<<endl;
    }
    return 0;
}