#include<iostream>

using namespace std;

int main(){

    int arr[100]={0}; // size should always be constant for array if declared statically
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int val = 0;

    for(int i=0;i<n;i++){
        if(arr[i]>val){
            val = arr[i];
            cout<<val<<" ";
        }else{
            cout<<val<<" ";
        }
    }

    return 0;
}