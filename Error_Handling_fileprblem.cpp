//Error Handling File Problem
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream myin("file.txt");
    try{
        if(!myin) throw 100;
        char words[255];
        myin.read(words,sizeof(words));
        cout<<words;
        myin.close();
    }
    catch(int x)
    {
        cout<<"Can't Open File\n";
        cout<<"Error Code"<<x;
    }
}
