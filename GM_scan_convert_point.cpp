#include<iostream>
#include<graphics>

using namespace std;
int main(){
    float x_1=1.7,x_2=2.2,x_3=2.8,y_1=0.8,y_2=1.3,y_3=1.9;
    float x1,x2,x3,y1,y2,y3;

    x1 = (int) (x_1);
    y1 = (int) (y_1);
    x2 = (int) (x_2);
    y2 = (int) (y_2);
    x3 = (int) (x_3);
    y3 = (int) (y_3);

    cout<<"The coordinate of the pixel containing the point ("<<x_1<<","<<y_1<<") is : ("<<x1<<","<<y1<<")"<<endl;
    cout<<"The coordinate of the pixel containing the point ("<<x_2<<","<<y_2<<") is : ("<<x2<<","<<y2<<")"<<endl;
    cout<<"The coordinate of the pixel containing the point ("<<x_3<<","<<y_3<<") is : ("<<x3<<","<<y3<<")"<<endl;

}
