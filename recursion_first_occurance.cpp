#include<iostream>
using namespace std;
#define ll long long

int index(int arr[], int size, int find){
    
    if(size == 0){
        return -1;
    }
    if(arr[0] == find){
        return 1;
    }
    int ans = index(arr+1,size-1,find);
    
    if(ans == -1){
        return -1;
    }else{
        return ans +1;
    }
}

int main(){
    
    int arr[10] = {0,1,4,2,4,5,7,4,8,5};
    int find = 4;
    //int s = arr.size();
    
    cout<<index(arr,10,find);
    
    return 0;
}