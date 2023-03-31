#include<iostream>

using namespace std;

int main(){
    int i,j,t,n;
    cin>>t;
    while(t--){
        cin>>n;
        char arr[n][n];
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                cin>>arr[i][j];
            }
        }

        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(arr[i][j] == '*'){
                    if(i<n && j<n){
                        arr[i][j] = '*';
                        arr[(i)+1][j] = '*';
                        arr[i][(j)+1] = '*';
                        arr[(i)+1][(j)+1] = '*';
                                            }

                }

            }
        }
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                cout<<arr[i][j];
            }
            cout<<endl;
        }

    }
    return 0;
}
