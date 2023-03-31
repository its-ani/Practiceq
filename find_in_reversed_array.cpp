#include<iostream>
using namespace std;

int find_key(int arr[],int n,int key){

    int s=0,e=n-1,mid;

    while(s<=e){
        mid = (s+e)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[s]<=arr[mid]){
            if(key>=arr[s] and key<=arr[mid]){
                e = mid-1;
            }
            else{
                s=mid+1;
            }
        }
        else{
            if(key>=arr[mid] and key<=arr[e]){
                s = mid+1;
            }
            else{
                e = mid-1;
            }
        }
    }
    return -1;

}

int main(){

int a[1000],key,n;
cin>>n;

for(int i=0;i<n;i++){
    cin>>a[i];
}
cin>>key;
cout<<endls<<"Find at Position :"<<find_key(a,n,key);
return 0;

}
