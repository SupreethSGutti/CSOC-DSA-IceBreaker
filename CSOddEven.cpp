#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of elements"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements"<<endl;
    vector<int> odd;
    vector<int> even;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
        {
            even.push_back(a[i]);
        }
        else
        {
            odd.push_back(a[i]);
        }
    }
    cout<<"Even numbers:"<<endl;
    for(int i=0; i<even.size(); i++)
    {
        cout<<even[i]<<" ";
    }
    cout<<endl;
    cout<<"Odd numbers: "<<endl;
    for(int i=0; i<odd.size(); i++)
    {
        cout<<odd[i]<<" ";
    }
    return 0;
}