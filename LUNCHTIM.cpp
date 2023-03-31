#include <iostream>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int arr[n],na[n]={0};

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(n==1){
        na[0]=1;
    }else{
    for(int i=0;i<n;i++){
        for(int j =i+1;j<n;j++){
            if(arr[i]==arr[j]){
                na[i]++;
            }
            else if(arr[i]<arr[j]){
                break;
            }
        }
    }
    for(int i=n-1;i>=0;i--){
        for(int j = i-1;j>=0;j--){
            if(arr[i])
        }
    }
    }

    for(int i=0;i<n;i++){
        cout<<na[i]<<" ";
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
