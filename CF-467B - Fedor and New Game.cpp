#include<iostream>
#include<bitset>
using namespace std;

int main(){
    int n,m,k;
    cin>>n>>m>>k;
    bitset<32> ar[m+10];
    for(int i=0;i<m+1;i++)
    {
        int x;cin>>x;
        ar[i]=x;
    }

    for(int i=0;i<m+1;i++)
    {
       cout<<ar[i]<<endl;
    }
    int ans=0;
    for(int i=0;i<m;i++)
    {
        int k_dif=0;
        for(int j=0;j<32;j++)
        {
            if(ar[m][j]!=ar[i][j])
            {
                k_dif++;
                cout<<ar[i][j]<<" ";
            }
            cout<<endl;
        }
        if(k_dif<=k)
        {
            ans++;
        }
    }
    //cout<<ans<<"\n";
    return 0;
}
