#include<iostream>
using namespace std;

int main(){

int a[] = {1,2,3,3,3,3,5,3,4,5,3};
int n,p,m=0;
n = sizeof(a)/sizeof(a[0]);
cout<<"enter the number";
cin>>p;

for (int i = 0 ; i<n; i++){
        if (a[i] == p){
            m++;
        }
}
cout<<"the number occurs "<<m<<" times";
}
