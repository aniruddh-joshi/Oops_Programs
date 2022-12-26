#include<iostream>
using namespace std;
inline int mul(int x,int y)
{
    int product;
    product=x*y;
    return product;
}
int main()
{
    int a,b;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;
    cout<<"The product is "<<mul(a,b)<<endl;
}
