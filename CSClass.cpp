#include<iostream>
using namespace std;
class student
{
    public:
        int add(int a, int b)
        {
            return (a+b);
        }
        int sub(int a, int b)
        {
            return (a-b);
        }
};
int main()
{
    int a,b;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;
    student s;
    cout<<a<<"+"<<b<<"="<<s.add(a,b)<<endl;
    cout<<a<<"-"<<b<<"="<<s.sub(a,b)<<endl;  
    return 0; 
}