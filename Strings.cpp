#include<iostream>
using namespace std;

void readline(char a[], int maxlen, char del = '#'){

    int i =0;
    char ch= cin.get();
    while(ch!= del){
        a[i] = ch;
        i++;
        if(i == (maxlen -1)){
            break;}
        ch=cin.get();}
        a[i] = '\0';
    return;
}
int main(){

char a[1000];
//readline(a,1000);
cin.getline(a,1000,'$');
// Get line is a inbuilt function which performs the same function that readline does.
cout<<a<<endl;
return 0;
}
