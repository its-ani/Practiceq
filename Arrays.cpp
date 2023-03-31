#include<iostream>
using namespace std;

int main(){

int n,a[6],i;

//cout<<" Enter the size of the array";
//cin>>n;

for (i = 1; i < 6; i++)
{
    cout<<"Enter the value";
    cin>>a[i];

}

for (i = 1; i <= 5; i++)
{
    cout<<a[i];

}
cout<<endl<<"Size of array"<<sizeof(a);
}
