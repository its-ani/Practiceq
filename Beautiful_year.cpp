#include<iostream>
#include<map>
#include<conio.h>
using namespace std;

int main(){

    int y,x,f=-1;
    cin>>y;
    x = y;
    map<int,int> mp;
    while(f != 1){
        while(y>0){
            mp[y%10]++;
            y=y/10;
        }
        for(int i=mp.begin();i!=mp.end();i++){
            if(mp[i]<2){
                f = 1;
            }
            else{
                x = x+1;
                break;
            }
        }
        if(f==1){
            cout<<y;
        }else{
            y = x;
        }
    }
    getch();
    return 0;
}