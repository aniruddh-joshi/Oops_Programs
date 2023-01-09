#include<iostream>
using namespace std;
int main()
{
    int i,j,r,c;
    cout<<"Enter the rows and column\n";
    cin>>r>>c;
    for(i=0;i<r;i++)
    {
        for(j=0;j<=i;j++)
        {
            cout<<i+j+1;
        }
        cout<<endl;
    }
    return 0;
}
