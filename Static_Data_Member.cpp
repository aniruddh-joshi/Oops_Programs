#include<iostream>
using namespace std;
class student{
    private:
    int roll,marks1,marks2;
    static int count;
    public:
    void set(int x,int y,int z);
    void get();
    void add();
    student();
    ~student();
};
int student::count=0;
void student::set(int x,int y,int z)
{
    roll=x;
    marks1=y;
    marks2=z;
}
void student::get()
{
    cout<<"Roll NO:"<<roll<<endl<<"Marks 1:"<<marks1<<endl<<"Marks 2:"<<marks2<<endl;
}
void student::add()
{
    cout<<"Total Marks:"<<marks1+marks2<<endl;
}
student::student()
{
    count++;
    cout<<"Object is created"<<endl;
    cout<<"No. of Objects= "<<count<<endl;
}
student::~student()
{
    count--;
    cout<<"Object is destroyed"<<endl;
    cout<<"No. of Objects= "<<count<<endl;
}
int main()
{
    student obj1;
    obj1.set(1,10,20);
    obj1.get();
    obj1.add();
    student obj2;
    obj2.set(2,40,40);
    obj2.get();
    obj2.add();
}
