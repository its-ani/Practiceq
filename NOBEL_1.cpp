#include <iostream>
using namespace std;
void solve(){
    long long int n,m,f=-1;
    cin>>n;
    long long int a[n];
    cin>>m;
    long long int present[n+1] = {0};

    for(int i=0;i<n;i++){
        cin>>a[i];
        present[a[i]]= 1;
    }/*
    for(int i=1;i<=m;i++){
        cout<<present[i];
    }
    cout<<endl; */
    for(int i=1;i<=m;i++){
        if(present[i] == 0){
            f=1;
            break;
        }
    }
    if(f==1){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
}
int main() {
    long long int t;
    cin>>t;
    while(t--){
        solve();
    }
	return 0;
}
