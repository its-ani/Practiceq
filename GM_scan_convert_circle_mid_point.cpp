#include<iostream>
#include<graphics.h>
using namespace std;
int main()
{
int x,y,Xmid,Ymid,R,D;
int gm,gd=DETECT;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
cout<<"Enter coordinates of mid point of the circle: "<<endl;
cin>>Xmid>>Ymid;
cout<<"Enter the Radius of circle: ";
cin>>R;
outtextxy(100,60,"Circle using Mid-Point Algorithm.");
x=0;
y=R;
D=(int)(5/4)-R;
do
{
putpixel(Xmid+x,Ymid+y,12);
putpixel(Xmid+y,Ymid+x,12);
putpixel(Xmid-y,Ymid+x,12);
putpixel(Xmid-x,Ymid+y,12);
putpixel(Xmid-x,Ymid-y,12);
putpixel(Xmid-y,Ymid-x,12);
putpixel(Xmid+y,Ymid-x,12);
putpixel(Xmid+x,Ymid-y,12);
if(D<0)
D+=(2*x)+1;
else
{
y=y-1;
D+=(2*x)-(2*y)+1;}
x=x+1;
}while(y>x);
getch();
return 0;
}
