#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,sum = 0,f = -1;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum += arr[i];
    }
    if((sum%2) == 0){
        cout<<"0";
    }
    else{
        for(int i=0;i<n;i++){
            if(arr[i]==2){
                arr[i]= 1;
                f = 1;
                break;
            }
        }
        cout<<f;
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

