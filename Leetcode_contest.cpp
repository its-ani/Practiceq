#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    string even, odd;
    string no;
    while(n>0){
        int temp = n%10;
        n = n/10;
        no += temp+'0';
    }

    sort(no.begin(), no.end());
    int n1=0, n2=0;

    for(int i=0;i<no.size();i++){
        if(i%2==0){
            n1 += no[i]-'0';
            n1 *= 10;
        }
        else{
            n2 += no[i]-'0';
            n2 *= 10;
        }
    }
    n1 /= 10;
    n2 /= 10;


    cout<<n1<<" "<<n2<<endl;

    cout<<n1+n2<<endl;
    return 0;
}