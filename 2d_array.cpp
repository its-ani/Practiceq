#include<iostream>

using namespace std;

// 2d array are stored as 1d in the memory
// address of value =  arrayname + [(i*col) + j] * sizeof(typeofarray);
// always have to pass columns value in the function 


int main(){

    int arr[10] = {0};

    cout<<arr<<endl;
    cout<<&arr<<endl;
    cout<<arr[0]<<endl;
    cout<<*arr<<endl;
    

    int m,n;
    int arr[][1000];
    cin>>m>>n;

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }


    return 0;
}