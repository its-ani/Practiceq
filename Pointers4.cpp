#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int arr[]= {20,30,40,50};
    int *ptr = arr;
    cout<<ptr<<endl;
    cout<<*(ptr+3);
}
