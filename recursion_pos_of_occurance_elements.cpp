#include<iostream>
using namespace std;
#define ll long long

int index(int arr[], int size, int find[], int f){
    
    if(size == 0){
        return -1;
    }
    int ans = index(arr+1,size-1,find[],f);

    for(int i=0;i<find.size();i++){
            arr[i] = arr[i]+1;
        }

    if(arr[0] == f){
        
        find.insert(0,0);
    }
    else{
        return -1;
    }

} 

int main(){
    
    int arr[10] = {0,1,4,2,4,5,7,4,8,5};
    int f = 4;
    //int s = arr.size();
    vector<int> find; 
    cout<<index(arr,10,find,f);
    
    return 0;
}