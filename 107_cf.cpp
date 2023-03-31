#include<iostream>
using namespace std;

void swap(int *arr, int m)
{
    int val = arr[m];
    for (int i=m-1; i>=0; i--){
        arr[i+1] = arr[i];}
    arr[0] = val;
}

int main(){

    int arr[] = {5,4,8,9,7,6,1,2,3};
    //int val = arr[3];
    swap(arr,3);
    //arr[0] = val;
    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }

return 0;
}
