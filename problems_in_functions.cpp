#include<iostream>
using namespace std;

void fun(int, int, char);

int main(){
fun(10,20,'g');
return 0;
}
void fun(int x, int y, char z){
cout<<x<<" "<<y<<" "<<z<<" ";
cout<<"Hello";
}
