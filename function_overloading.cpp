#include<iostream>
using namespace std;

//# we can have function with different arguments and with different types of arguments.

void print(int i)
{
    cout<<i;
}

void print(string s)
{
    cout<<s;
}


int main()
{
    print(10);
    cout<<endl;
    print("gfg");
}

