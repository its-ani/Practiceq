#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a[3],b[3],sum[2]={0};
	for(int i=0;i<3;i++){
	    cin>>a[i];
	    cin>>b[i];
	}

	for(int i=0;i<3;i++){
	    if(a[i]>b[i]){
	        sum[0]++;
	    }
	    else{
	        sum[1]++;
	    }
	}

	for(int i=0;i<2;i++){
	    cout<<sum[i]<<" ";

	}
	return 0;
}
