#include<iostream>

using namespace std;

int main(){

int a,n,i,j,arr[]={1,2,3,4,5,6,7};

n = sizeof(arr)/sizeof(arr[0]);
//cout<<n<<endl;

int temp = arr[n-1];
//cout<<temp<<endl;
{
for (i=n-1;i>0;i--)
{
    arr[i] = arr[i-1];
    //arr[n+1]= arr[n];

}
}

arr[0]=temp;

for(j=0;j<n;j++)
{
    cout<<arr[j];
}
}
