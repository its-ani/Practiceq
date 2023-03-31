#include<vector>
#include<iostream>

using namespace std;

int main(){

int n= 10;
vector<int> v(n,5); //It creates the vector of size 10 with each elements having value 5.

for (auto x: v)
cout<<x<<" ";
}
