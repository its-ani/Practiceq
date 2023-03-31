#include<iostream>
#include<cstring>
using namespace std;

void del_dup(char a[]){

int i;
int s = strlen(a)-1;
int j =0;
if (s == 1 || s==0){
    return;
}
for(i =1; i <=s;i++){
    if(a[i] != a[j]){
        j++;
        a[j]=a[i];
    }
}
a[j+1]='\0';
return;
}



int main()
{
  char a[1000];
  cin.getline(a,1000);
  del_dup(a);
  cout<<a;
  return 0;

}
