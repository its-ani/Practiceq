#include<iostream>
using namespace std;

bool find(int a[],int n,int f){

    if(n==0){
        return false;
    }
    
    if(a[0] == f){
        return true;
    }

    return find(a+1,n-1,f);

}

int main(){

    int a[5] = {1,12,30,14,5};
    cout<<"Element is find : "<< find(a,5,12)<<endl;

    return 0;
}