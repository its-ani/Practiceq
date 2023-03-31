// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

int MissingNumber(vector<int>& array, int n);

// Position this line where user code will be pasted.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];

        cout << MissingNumber(array, n) << "\n";
       //for (int i = 0; i < n - 1; ++i) cout << array[i];
    }
    return 0;
}// } Driver Code Ends



int MissingNumber(vector<int>& array, int n) {

    int i,total = 0;

{

    int total = ((n + 1) * n) / 2;
    //cout<<"Total initial :"<<total<<endl;
    for (int i = 0; i < n-1; i++){
        total = total - array[i];
        //cout<<"Total on iteration"<<total<<endl;

    }
    return total;
}


/*
     if(n==1){
            return(2);
     }

    else;
    for(i=1;i<n-1;i++)
{

        if(array[i-1]==i){
            continue;
        }
        else;{
            return(i);
        }
    }
*/
    // Your code goes here
}


