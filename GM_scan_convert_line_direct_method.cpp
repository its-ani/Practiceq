#include<iostream>
#include<conio.h>
#include<graphics.h>

using namespace std;

int main()
{
int gd=DETECT,gm;
int x1,y1,x2,y2,x,y,dy,dx,b;
float m;
cout<<"\n\t\t**Line drawing using Direct OR Polynomial method**\n";
cout<<"\n Enter the x coordinates(x1,x2)\n";
cin>>x1>>x2;
cout<<"\n Enter the y coordinates(y1,y2)\n";
cin>>y1>>y2;
dx=x2-x1;
dy=y2-y1;
m=dy/dx;
b=y1-(m*x1);
x=x1;
y=y1;
initgraph(&gd,&gm," ");
setbkcolor(WHITE);
if(m<1)
{
    while(x<=x2)
        {
        putpixel(x,int(y+0.5),12);
        x++;
        y=(m*x)+b;
        }
    }
    else
{
    while(y<=y2)
    {
    putpixel(int(x+0.5),y,12);
    y++;
    x=(y-b)/m;
    }
}
setcolor(BLACK);
outtextxy(100,60,"LINE USING DIRECT EQUATION METHOD.");
getch();
}
