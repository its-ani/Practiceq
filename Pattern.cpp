#include<iostream>

using namespace std;

int main(){

int a;

cin>>a;
for(int i =0; i <a; i++){
    for(int j =0; j<= i; j++){
        if(i%2 == 0 || j == 0 || j == i){
            cout<<"1";
        }
        else{
            cout<<"0";}
        }
        cout<<endl;
    }
}
