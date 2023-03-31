#include<iostream>
using namespace std;

float sq_root(int a){

    int s=0,e=a;
    float ans =-1;
    while(s<=e){
        int mid = (s+e)>>1;

        if((mid*mid)==a){
            return mid;
        }
        if((mid*mid)<a){
            ans = mid;
            s =mid+1;
        }
        else if((mid*mid)>a){
            e = mid-1;
        }
    }
    float inc=0.1,si=3;
    for(int i=1;i<=si;i++){
        while((ans*ans)<=a){
            ans+=inc;
        }
        ans = ans-inc;
        inc = inc/10;
    }

    return ans;
}

int main()
{
    int n,i,j;
    cin>>i;
    while(i>0){
    cin>>n;
    cout<<sq_root(n)<<endl;
    i--;
    }
    return 0;
}

