#include <bits/stdc++.h>
using namespace std;
void solve(){
    int u,v,V,a,s;
    cin>>u>>v>>a>>s;

    V = sqrt(u^2 + 2 * a * s);
    if(u==v){
        cout<<"Yes";
    }
    {
    if(V>v){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }}
}
int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }
	return 0;
}
