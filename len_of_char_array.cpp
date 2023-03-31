#include<iostream>
using namespace std;

void removex(char s[]){

    if(s[0] == '\0'){
        return;
    }
    if(s[0] != 'x'){
        removex(s+1);
    }
    else{
        int i=1;
        for(; i != '\0'; i++){
            s[i-1] = s[i];
        }
        s[i-1] = s[i];
        removex(s);
    }
}

int len(char s[]){

    if(s[0] == '\0'){
        return 0;
    }

    int sm = len(s+1);

    return 1+sm;

}

int main(){

    char s[100];
    cin>>s;
    cout<< "Length of s : "<<len(s)<<endl;
    removex(s);
    cout<<"New string s : "<<s<<endl;

    return 0;
}