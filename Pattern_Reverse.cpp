#include<iostream>
using namespace std;
int main()
{
    int i,j,row,col;
    cout<<"Enter the number of rows:\n";
    cin>>row;
    cout<<"Enter the number of column:\n";
    cin>>col;
    for(i=row-1;i>=0;i--)
    {
        for(j=col-1;j>=0;j--)
        {
            cout<<j+1<<"\t";
        }
        cout<<endl;
    }
}
