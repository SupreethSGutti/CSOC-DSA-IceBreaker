#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    double a,b;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;
    char op;
    cout<<"Enter an operator ( +, - , *, /, %, ^) "<<endl;
    cin>>op;
    int ans;
    switch (op)
    {
    case '+':
        ans=a+b;
        break;
    case '-':
        ans=a-b;
        break;
    case '*':
        ans=a*b;
        break;
    case '/':
        ans=a/b;
        break;
    case '%':
        ans=a%b;
        break;
    case '^':
        ans=pow(a,b);
    default:
        break;
    }
    cout<<"Answer is "<<ans<<endl;
    return 0;
}