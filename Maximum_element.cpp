#include<iostream>
#include<vector>
using namespace std;

int main(){

int arr[]= {5,100,150,14,78,95,12};
int n = sizeof(arr)/sizeof(arr[0]);


int res = arr[0];

for (int i=1;i<n;i++)
    res = max(res,arr[i]);


// * 2nd Method

//int res = *max_element(arr,arr+n);
cout<<res<<" ";

}
