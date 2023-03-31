#include<iostream>

using namespace std;

int main(){

int x = 100;
int &y = x;

cout<<&x<<" = "<<*(&x)<<" "<<y;


}
