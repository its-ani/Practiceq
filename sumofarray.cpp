#include<iostream>
using namespace std;

int sum(int a[], int n){
    if(n==0){
        return a[n];
    }
    int s = sum(a+1,n-1);
    return a[n]+sum;
}

int main(){
    int a[5]= {1,2,3,4,5};
    cout<<"Sum : "<<sum(a,5)<<endl;
    return 0;
}