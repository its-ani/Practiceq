#include<iostream>
using namespace std;

int main(){

    int row=0, column=0;
    cin>>row>>column;

    // -----------------------------------------------------------------
    
    // Star Pattern
    // for(int i=1;i<=row;i++){
    //     for(int j=1;j<=row-i;j++){
    //         cout<<" ";
    //     }
    //     for(int k=1;k<=(2*i)-1;k++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // for(int i=row;i>=0;i--){
    //     for(int j=row;j>i;j--){
    //         cout<<" ";
    //     }
    //     for(int k=(2*i)-1;k>0;k--){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // -----------------------------------------------------------------

    // Pallindromic Pattern
    // for(int i=1;i<=row;i++){
    //     for(int j=1;j<=row-i;j++){
    //         cout<<" ";
    //     }
    //     for(int k=i;k>0;k--){
    //         cout<<k;
    //     }
    //     for(int l=2;l<=i;l++){
    //         cout<<l;
    //     }
    //     cout<<endl;
    // }

    // -----------------------------------------------------------------

    // for(int i=0;i<row;i++){
    //     for(int j=row;j>i;j--){
    //         cout<<" ";
    //     }
    //     for(int k=0;k<row;k++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // -----------------------------------------------------------------
    
    // for(int i=row;i>=0;i--){
    //     for(int j=1;j<=i;j++){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

    // -----------------------------------------------------------------
    
    // Butterfly Pattern

    // -----------------------------------------------------------------

    // Floyd's Triangle
    // int k=1;
    // for(int i=0;i<row;i++){
    //     for(int j=0;j<=i;j++){
    //         cout<<k<<" ";
    //         k++;
    //     }
    //     cout<<endl;
    // }

    // -----------------------------------------------------------------

    // for(int i=1;i<=row;i++){
    //     for(int j= 1;j<=i;j++){
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    // }

    // -----------------------------------------------------------------

    // Half Pyrimad after 180° rotation
    // for(int i=row;i>=0;i--){
    //     for(int j=0;j<row;j++){
    //         if(j>=i){
    //             cout<<"*";
    //         }else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }
    //  ---------------   2nd   --------------
    // for(int i=1;i<=row;i++){
    //     for(int j=1;j<=row;j++){
    //         if(j<=row-i){
    //             cout<<" ";
    //         }else{
    //             cout<<"*";
    //         }
    //     }
    //     cout<<endl;
    // }

    // -----------------------------------------------------------------

    // Inverted Half Pyramid
    // for(int i=0;i<row;i++){
    //     for(int j=row;j>i;j--){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }    
    
    // -----------------------------------------------------------------

    // Hollow Rectangle
    // for(int i=0;i<row;i++){
    //     for(int j=0;j<column;j++){
    //         if(j==0 || i==0){
    //             cout<<"*";
    //         }
    //         else if(j==column-1 || i==row-1){
    //             cout<<"*";
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }

    return 0;
}