#include<bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        int p;
        cin>>p;
        arr[i] = p;
    }
    
    int amt;    
    cin>>amt;
    
    int dp[amt+1] = {0};
    dp[0] = 1;
    
    for(int i=0;i<n;i++){
        for(int j=arr[i];j<amt+1;j++){
            dp[j] += dp[j-arr[i]];
        }
    }
    
    cout<<dp[amt];
    
    return 0;
}