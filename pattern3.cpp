#include<iostream>
using namespace std;
int main(){
    int i,j=0,k=0,l=0,n;
    cin>>n;
    for(i=0;i<n;i++){
        l=n-i-1;
        for(;l>0;l--){
            cout<<" ";
        }
        for(k=0;k<2*i+1;k++){
            cout<<"*";
        }
        cout<<endl;
    }
  return 0;
}



