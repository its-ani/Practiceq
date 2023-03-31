#include<iostream>
#include<vector>
#include<numeric>

using namespace std;

int main(){

int arr[] = {10,20,30,40};
int n = sizeof(arr)/sizeof(arr[0]);
int s = 0;

s = accumulate(arr,arr+n,s);
cout<<s;

}
