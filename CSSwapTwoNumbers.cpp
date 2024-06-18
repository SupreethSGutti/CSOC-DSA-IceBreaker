
#include<iosteram>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two numbers "<<endl;
    cin>>a>>b;
    cout<<"Befor swapping a="<<a<<" and b="<<b<<endl;
    int temp=a;
    a=b;
    b=temp;
    cout<<"After swapping a="<<a<<" and b="<<b<<endl;
    return 0;
}




#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two numbers "<<endl;
    cin>>a>>b;
    int* ap=&a;
    int* bp=&b;
    cout<<"Befor swapping a="<<*ap<<" and b="<<*bp<<endl;
    int* temp;
    temp=bp;
    bp=ap;
    ap=temp;
    cout<<"After swapping a="<<*ap<<" and b="<<*bp<<endl;
    return 0;
}