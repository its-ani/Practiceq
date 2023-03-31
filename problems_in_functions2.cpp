#include<iostream>
using namespace std;

void fun(){
static int x =1;
int a = 1;
a++;
x++;
cout<<x<<" "<<a<<" ";
}

int main(){
fun();
fun();
fun();
return 0;
}
