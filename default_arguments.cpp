#include<iostream>
using namespace std;

int add(int a, int b, int c = 0, int d = 0) //Default argument should always be on the left.
{
return a+b+c+d;
}

int main()
{
cout<<add(10,20,30);
return 0;
}
