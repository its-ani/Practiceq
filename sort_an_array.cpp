#include<iostream>
using namespace std;

int main()
{
  int arr[] = {100,0,-1,89,9,57,3};
  int i,j,n,temp;

n = sizeof(arr)/sizeof(arr[0]);
//bool swapped;
  for(i=0; i<n-1; i++){
        //swapped = false;
    for(j=0; j<n-i-1; j++){
        if (arr[j] > arr[j+1])
            {
                temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
               //swapped = true;

            }
  }}
  for (i = 0; i <n; i++)
        cout<<arr[i]<<" ";
}
