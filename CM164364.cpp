#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){

        int n,x,k=0;
        cin>>n;
        //cin>>x;
        int a[n];

        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        for(int i=0;i<n;i++){
            if(a[i] == a[i+1]){
                k++;
                cout<<k;
            }
        }
        cout<<endl;
        int uni = n-k;
        cout<<uni<<endl;

        /*if(k>=x){
            //k=k-x;
            cout<<uni<<endl;
        }else{
            ans = k-x;
            cout<<uni+ans<<endl;
        }*/
    }
    return 0;
}
