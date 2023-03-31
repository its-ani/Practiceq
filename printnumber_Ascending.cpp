#include<iostream>
using namespace std;

int print(int m){

    if(m== 0){
        return 0;
    }
    int n = print(m-1);

    cout<<m<<endl;
    
    return n;
}

int main(){

    int m;
    cin>>m;
    cout<<"Main function : "<<print(m)<<endl;

    return 0;
}