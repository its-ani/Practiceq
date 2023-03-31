#include<iostream>

using namespace std;

int main(){

string a, b;
cin>>a;
cin>>b;
if (a.length() != b.length()){
    cout<<"not same";
    }
int count[256] = {0};
for(int i =0; i<a.length(); i++){
    count[a[i]]++;
}
for(int i = 0; i<b.length(); i++){
    count[b[i]]--;
    }

for(int i =0; i<256; i++){
    if(count[i] != 0)
        cout<<"not same";}
cout<<"same";
}
