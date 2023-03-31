#include<iostream>
using namespace std;

int main(){

    char button;
    cout<<"Input a character.";
    cin>>button;

    switch (button)
    {
        case 'a':
            cout<<"A"<<endl;
            break;
        
        case 'b':
            cout<<"B"<<endl;
            break;
        
        case 'c':
            cout<<"C"<<endl;
            break;
        
        case 'd':
            cout<<"D"<<endl;
            break;
        
        default:
            cout<<"Unknown key"<<endl;
            break;
        
    }


    return 0;
}