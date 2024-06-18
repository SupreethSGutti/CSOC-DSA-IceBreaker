#include<iostream>
using namespace std;
int main()
{
    int row, col;
    cout<<"Enter number of rows"<<endl;
    cin>>row;
    cout<<"Enter number of columns"<<endl;
    cin>>col;
    int a[row][col];
    cout<<"Enter the input"<<endl;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<"Enter element of row number: "<<i<<" and column number: "<<j<<endl;
            cin>>a[i][j];
        }
    }
    cout<<"Output lookslike"<<endl;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}