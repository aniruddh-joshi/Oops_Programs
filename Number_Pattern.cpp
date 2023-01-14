#include<iostream>
using namespace std;
int main()
{
    int i,j,row,col;
    int count=1;
    cout<<"Enter the number of rows and column you want to enter\n";
    cin>>row>>col;
    for(i=0;i<row;i++)
    {
        for(j=0;j<=i;j++)
        {
            cout<<count<<"\t";
            count++;
        }
        cout<<endl;
    }
}
