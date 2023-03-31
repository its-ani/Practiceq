#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve(){
    vector<int> s;
    vector<int> r;
    long int n,x,p,q;
    cin>>n>>x;
    for(int i=0;i<n;i++){
        cin>>p;
        cin>>q;
        s.push_back(p);
        r.push_back(q);
    }
    vector<int> final_s;
    vector<int> final_r;
    for(int i=0;i<n;i++){
        if(s[i]<=x){
            p = s[i];
            q = r[i];
            final_s.push_back(p);
            final_r.push_back(q);
        }
    }

    cout<<*max_element(final_r.begin(), final_r.end())<<endl;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }
	return 0;
}

