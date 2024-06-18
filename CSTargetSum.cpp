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
    for(int i=0; i<n; i++)
    {
        int mid=search(a,t-a[i],i,n);
        if(mid!=-1)
        {
            cout<<"Elements of index number "<<i<<" and "<<mid<<" add to "<<t<<endl;
            break;
        }
    }
    return 0;
}