#include<iostream>
using namespace std;
class student{
    private:
    int rn,m1,m2;
    public:
    void set(int x,int y,int z);
    void get();
    friend void add(student po);
};
void student::set(int x,int y,int z)
{
    rn=x;
    m1=y;
    m2=z;
}
void student::get()
{
    cout<<"Roll NO: "<<rn<<endl<<"Marks 1:"<<m1<<endl<<"Marks 2:"<<m2<<endl;
}
void add(student po)
{
    cout<<"Total Marks is "<<po.m1+po.m2<<endl;
}
int main(){
    student obj1,obj2;
    obj1.set(1,90,90);
    obj1.get();
obj2.set(2,50,40);
obj2.get();
    add(obj1);
add(obj2);
}
