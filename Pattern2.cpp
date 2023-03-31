#include<iostream>
using namespace std;
int main(){
    int i,j,k=1,l=0,n;
    cin>>n;
    for(i=0;i<n;i++){
        l=n-i-1;
        for(;l>0;l--){
            cout<<" ";
        }
        for(j=0;j<=i;j++){
            cout<<k;
            k++;
        }
        k=k-i;
        cout<<endl;
    }
  return 0;
}



