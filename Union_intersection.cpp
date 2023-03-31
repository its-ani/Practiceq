#include <stdio.h>
#include<iostream>

using namespace std;
int m = 0;
void print(int size1,int size2,int c[]){

    int i;
    for (i=0;i<size1+m;i++)
	{
	    cout<<c[i]<<" ";
	}

}

void unionfun(int c[], int a[],int b[],int size1,int size2){
    int i,j;
    for (i=0;i<size1;i++)
	{
	    c[i]=a[i];
	}

	for (i=0;i<size1;){
        for(j=0;j<size2;j++){

            if (c[i] != b[j]){
                c[i+size1]=b[j];
                m++;
            }
            i++;
        }
	}
}

int main() {
	//code
	int a[]={1,3,5,7,9,11,13};
	int b[]={2,4,6,8,10};
	int size1,size2,i,j;

	size1=sizeof(a)/sizeof(a[0]);
	size2=sizeof(b)/sizeof(b[0]);


    int c[size1 + size2];

	unionfun(c,a,b,size1,size2);

	print(size1,size2,c);

	return 0;
}
