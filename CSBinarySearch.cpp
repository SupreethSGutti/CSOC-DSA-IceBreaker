#include<iostream>
using namespace std;

bool binarysearch(int a[], int n, int key)
{
    int start=0;
    int end=n;
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(a[mid]==key)
        {   
            cout<<"Search is successfull"<<endl;
            cout<<"The index is "<<mid<<endl;
            return true; 
        }
        else
            {
                if(a[mid]<key)
                {
                    start=mid+1;
                }
                else
                    {
                        end=mid-1;
                    }
            }
    }
    return false;
}


int main()
{
    int n, key;
    cout<<"Enter array size"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter array elements"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cout<<"Enter an element to be searched"<<endl;
    cin>>key;
    if(binarysearch(a, n, key)==false)
    {
        cout<<"Search is unsuccesfull"<<endl;
    }
    
    return 0;

}
