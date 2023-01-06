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
    cout<<"INLINE FUNCTION";
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b>>endl;
    cout<<"The product is "<<mul(a,b)<<endl;
}
