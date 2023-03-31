#include<iostream>
using namespace std;

void func(int *a){

    int i;
    for(i= 3;i< 1000000000;i+= 2){
        a[i] = 1;
    }
    for(int i = 3; i<= 1000000000 ;i = i+2 ){
        if(a[i]==1){
            for(int j =i*i; j<=1000000000; j+= i){
                a[j]=0;
            }
        }
    }
    a[2] = 1;
    a[0] = a[1] = 0;
}

int main(){

 int n,p,q;
 cin>>n;
 cin>>p>>q;
long long int a[1000000000] = {0};
 func(a);
long long int c[1000000000] = {0};

 for(int i = 1;i<1000000000;i++){
    c[i] = c[i-1] + a[i];
 }

 for(int i =0;i<=n;i++){
        if( a[i]==1){
            cout<<i<<" ";
        }
        cout<<endl;
 }
 cout<<(c[q]-c[p]);
return 0;

}
