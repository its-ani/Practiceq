#include <iostream>
using namespace std;
void solve(){
    int n,m,j=0,p=0;
    cin>>n>>m;
    int f[n],c[m];
    for(int i=0;i<n;i++){
        cin>>f[i];
    }
    for(int i=0;i<m;i++){
        cin>>c[i];
    }
    for(int i=0;i<m+n;i++){
        if(c[i]<f[j]){
            i++;
            j++;
            p++;
        }
        else{
            p++;
        }
    }
    cout<<p;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }
	return 0;
}
