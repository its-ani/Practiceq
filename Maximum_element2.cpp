
#include<iostream>
#include<vector>
using namespace std;

int main(){

int max;
vector<int> v{5,100,150,14,78,95,12};
// 1st method
max = v[0];

for (int i =0; i< v.size(); i++)
    if (max > v[i])
        continue;

    else
        max = v[i];

cout<<"Maximum value ="<<max;

// 2nd Method

/*
for (auto x: v)
    if (max > x)
        continue;

    else
        max = x;
cout<<"Maximum value ="<<max;

*/

}
