#include <bits/stdc++.h>
using namespace std;

void printArray(vector<int> arr, int no, int n)
{   int k =0,ans=0,a;
    vector<int> v;
	for (int i = 0; i < no; i++){
    if(arr.size() == n){
        cout<<arr[i];
        v.push_back(arr[i]);
    }
    }
    for(int i=1;i<v.size();i++){
        a = v[i-1] & v[i];
    }
    if(a==0){
        k++;
        ans += k;
    }
    //cout<<endl<<ans;
    cout << endl<<ans*2;
}

void printSubsequences(vector<int> arr, int index,
					vector<int> subarr,int n)
{
	if (index == arr.size())
	{
		int l = subarr.size();
		if (l != 0)
			printArray(subarr, l, n);
	}
	else
	{
		printSubsequences(arr, index + 1, subarr, n);
		subarr.push_back(arr[index]);
		printSubsequences(arr, index + 1, subarr, n);
	}
	return;
}
int main()
{
    int n,k,a;
    cin>>n>>k;
    int no = pow(2,k)-1;
    //cout<<no;
	vector<int> arr;
	vector<int> b;
    for(int i=0;i<=no;i++){
        cin>>a;
        arr.push_back(a);
    }
	printSubsequences(arr, 0, b, n);
	return 0;
}

// This code is contributed by
// sanjeev2552
