#include<iostream>
using namespace std;

void fun(int a[],int n){
    int cnt[64] = {0};

	for(int j=0;j<n;j++){
		int i=0;
		int no = a[j];
		while(no>0){
			cnt[i] += (no&1);
			i++;
			no = no>>1;
		}
	}
	int ans=0,p= 1;
	for(int i=0;i<64;i++){
		cout<<cnt[i]<<" ";
	}
	//cout<<ans;
}

int main() {
	int a[] = {7,7,3,4,2,3,3,4,4,7}
	int n = sizeof(a)/sizeof(int);
	return 0;
}
