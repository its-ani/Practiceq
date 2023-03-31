#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n,ans,i=1,p=1;
    cin>>n;

    while(i <= n){
        ans = 3*p + 2;
        if(ans%4 != 0){
            cout<<ans<<" ";
        }
        else{
            p++;
            ans = 3*p + 2;
            cout<<ans<<" ";
        }
        i++;
    }
    return 0;
}
