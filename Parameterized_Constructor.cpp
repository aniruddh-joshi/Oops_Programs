#include<iostream>
using namespace std;
class student{
    private:
    int rn,m1,m2;
    public:
    void set(int x,int y,int z);
    void get();
    void add();
    student(int x,int y,int z);
};
void student::set(int x,int y, int z)
{
    rn=x;
    m1=y;
    m2=z;
}
void student::get()
{
    cout<<"Roll No: "<<rn<<endl<<"Marks 1:"<<m1<<endl<<"Marks 2:"<<m2<<endl;
}
void student::add()
{
    cout<<"Total Marks is "<<m1+m2<<endl;;
}
student::student(int x,int y,int z)
{
    cout<<"Parameterized Constructor is called "<<endl;
    rn=x;
    m1=y;
    m2=z;
}
int main()
{
    student obj1(1,20,30), obj2(2,20,40);
    obj1.get();
    obj1.add();
    obj2.get();
    obj2.add();
}
