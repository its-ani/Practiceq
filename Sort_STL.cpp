#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;
int main()
{
    vector<int> v{1,5,4,9,8,6,2};


    sort(v.begin(), v.end());

    for(int x : v){
        cout<<x<<" ";
    }

    sort(v.begin(), v.end(), greater<int>());

    cout<<endl;
    for(int x: v){
        cout<<x<<" ";
    }


}
