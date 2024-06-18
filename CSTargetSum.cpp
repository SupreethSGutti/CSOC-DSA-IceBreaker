#include<iostream>
using namespace std;
int search(int a[], int key, int p, int n)
    {
        int i;
        for(i=0; i<n; i++)
        {
            if(a[i]==key && i!=p)
            {
                break;
            }
        }
        return i;
    }


int main()
{
    int n;
    cout<<"Enter number of elements"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter array elements"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int t;
    cout<<"Enter the target"<<endl;
    cin>>t;
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if((a[i]+a[j])==t)
            {
                cout<<"Adding element of index number "<<i<<" and "<<j<<" add up to "<<t<<endl;
                return 0;
            }
        }
    }
    return 0;
}