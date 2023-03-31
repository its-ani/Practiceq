#include<iostream>
using namespace std;

bool check(int a[], int s){

    if(s==0 || s == 1){
        return true;
    }
    if(a[0] > a[1]){
        return false;
    }
    return check(a+1,s-1);

}


int main(){

    int a[5] = {8,2,3,4,5};

    cout<<check(a,5)<<endl;

    return 0;
}