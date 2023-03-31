
#include <bits/stdc++.h>
using namespace std;
void solve(){
    long long int n,m,sum=0,csum=0;
    cin>>n;
    int a[n];
    cin>>m;
    //bool present[n+1] = {false};

    for(int i=0;i<n;++i){
        cin>>a[i];
        csum+=a[i];
        }
    sum = (n*(n+1))/2;

    if(sum==csum){
        cout<<"No"<<endl;
    }else{
        cout<<"Yes"<<endl;
    }

}
int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }
	return 0;
}
