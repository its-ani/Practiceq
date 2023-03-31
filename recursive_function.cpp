#include<iostream>
using namespace std;

void fun(int x)
{
    if (x==0)
    {
        return;
    }
    else
    {
        cout<<"geeks"<<" "<<x<<endl;
        cout<<"Two Geeks";
        fun(x-1);
        cout<<"One Geeks";
    }
}

int main(){

fun(3);
return 0;

}
