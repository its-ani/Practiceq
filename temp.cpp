#include<iostream>

using namespace std;

int main(){

    int s = 65;
    float a = 65.50;

    cout<<"A :"<<a<<endl;   // 
    cout<<"65 :"<<char(a)<<endl;  //explicit typecasting
    cout<<float(a)<<endl;
    cout<<double(a)<<endl;
    cout<<int(a)<<endl;
    cout<<"-----------------------------"<<endl;
    cout<<"A :"<<s<<endl;   // 
    cout<<"65 :"<<char(s)<<endl;  //explicit typecasting
    cout<<float(s)<<endl;
    cout<<double(s);


    return 0;
}