#include<iostream>
using namespace std;

void func(){
    
    int n,m;

    cin>>n>>m;

    string a, b;
    cin>>a>>b;
    
    if(a[n-1] == b[m-1] && a[n-1] == b[m-2]){
        cout<<"NO"<<endl;
        return;
    }
    else if(a[n-1] == b[m-1] && a[n-2] == b[m-1]){
        cout<<"NO"<<endl;
        return;
    }
    else if(a[n-1] == b[m-1] && a[n-2] == b[m-2]){
        cout<<"NO"<<endl;
        return;
    }
    else{
        for(int i=1;i<n-2;i++){
            if(a[i-1] == a[i]){
                cout<<"NO"<<endl;
                return;
            }
        }
        for(int i=1;i<m-2;i++){
            if(b[i-1] == b[i]){
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    cout<<"YES"<<endl;
    
}

int main(){
    
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++){
        func();
    }
    
    return 0;
}

// #include<iostream>
// #include<string>
// #include<bits/stdc++.h>

// using namespace std;

// int main(){

//     int t;
//     cin>>t;

//     while(t--){
//         int n,m;
//         string s,t;
//         cin>>n>>m;
//         cin>>s>>t;


//         reverse(t.begin(),t.end());

//         s += t;
//         int ans = 0;
//         for(int i=1;i<n+m;i++){
//             if(s[i] == s[i-1]){
//                 ans++;
//             }
//         }

//         if(ans == 1)    cout<<"YES"<<endl;
//         else cout<<"NO"<<endl;
//     }
//     return 0;
// }