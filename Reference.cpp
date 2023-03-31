#include<iostream>

using namespace std;

void swap(int &x, int &y) //If & is not used then it make copy of these vectors and make desired changes in it.
{
    int temp = x;
    x = y;
    y = temp;
    //cout<<x<<" "<<y<<endl;

}


int main(){

int x=10, y=15;
swap(x,y);
cout<<x<<" "<<y<<" ";
return 0;

}

