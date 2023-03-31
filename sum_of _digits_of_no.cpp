#include <iostream>
using namespace std;

int main() {
	// your code goes here.
	int n,t,sum=0;

	cin>>t;
	while(t>0){
	    cin>>n;
	    while(n>0){
	        sum+=n%10;
	        n=n/10;

	    }
	    cout<<sum<<endl;
	    sum=0;
	    t--;
	}
	return 0;
}
