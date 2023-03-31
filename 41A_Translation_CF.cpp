#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char a[101],b[101];
    int flag;
    cin>>a;
    cin>>b;
    int n=strlen(b);
        for(int i=0,j=n-1;i<n;i++,j--){
            if(a[i]==b[j]){
                flag = 1;
            }
            else{
                flag=0;
                break;
            }
        }
    if(flag == 1){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
/*#include<iostream>
#include<cstring>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
    int flag=0;
    cin>>a;
    cin>>b;
        reverse(b.begin(),b.end());
        {
            if(a==b){
                cout<<"YES";
            }

            else{
                cout<<"NO";
            }
        }
    return 0;
}
*/
