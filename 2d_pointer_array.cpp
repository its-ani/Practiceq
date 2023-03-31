#include<iostream>
using namespace std;

void printpathchecker(int **arr, int row, int **test, int start, int end){

    if(start == row-1 && end == row-1){
        test[start][end] = 1;        
        for(int i=0;i<row;i++){
            for(int j=0;j<row;j++){
                cout<<test[i][j]<<" ";
            }
            cout<<endl;
        }
        test[start][end] = 1;        
        return;
    }

    if(start<0 || end<0 || start>=row || end>=row || test[start][end] == 1 || arr[start][end] == 0){
        return;
    }

    test[start][end] = 1;

    printpathchecker(arr,row,test,start+1,end);
    printpathchecker(arr,row,test,start,end+1);
    printpathchecker(arr,row,test,start-1,end);
    printpathchecker(arr,row,test,start,end-1);

    test[start][end] = 0;
    return;
}


bool haspathchecker(int **arr, int row, int **test, int start, int end){

    if(start == row-1 && end == row-1){
        return true;
    }

    if(start<0 || end<0 || start>=row || end>=row || test[start][end] == 1 || arr[start][end] == 0){
        return false;
    }

    test[start][end] = 1;

    if(haspathchecker(arr,row,test,start+1,end)){
        return true;
    }
    if(haspathchecker(arr,row,test,start-1,end)){
        return true;
    }
    if(haspathchecker(arr,row,test,start,end+1)){
        return true;
    }
    if(haspathchecker(arr,row,test,start,end-1)){
        return true;
    }

    test[start][end] =0;
    return false;

}

bool haspath(int **arr, int row){

    int **test;
    test = new int *[row];

    for(int i=0;i<row;i++){
        //cin>>col;  If we want to add dynamic col.
        test[i] = new int [row];
        for(int j=0;j<row;j++){
            test[i][j] = 0;
        } 
    } 
    printpathchecker(arr,row,test,0,0);
    cout<<endl;
    //return haspathchecker(arr,row,test, 0 ,0);
}

int main(){

    int **arr, row = 0, col = 0;
    cin>>row;
    arr = new int *[row];

    for(int i=0;i<row;i++){
        //cin>>col;  If we want to add dynamic col.
        arr[i] = new int [row];
        for(int j=0;j<row;j++){
            cin>>arr[i][j];
        }
    } 
    cout<< haspath(arr,row)<<endl;

    return 0;
}