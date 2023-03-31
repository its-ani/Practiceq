#include<iostream>
#include<conio.h>
#include<graphics.h>

using namespace std;

//DDA Function for line generation
void DDA(int X0, int Y0, int X1, int Y1)
{
// calculate dx & dy
int dx = X1 - X0;
int dy = Y1 - Y0;
// calculate steps required for generating pixels
int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);
// calculate increment in x & y for each steps
float Xinc = dx / (float) steps;
float Yinc = dy / (float) steps;
// Put pixel for each step
float X = X0;
float Y = Y0;
for (int i = 0; i <= steps; i++)
{
putpixel(round(X),round(Y),YELLOW);
outtextxy(100,60,"Line using Digital differential Method.");
setcolor(11); // put pixel at (X,Y)
X += Xinc; // increment in x at each step
Y += Yinc; // increment in y at each step
delay(50); // for visualization of line-
// generation step by step
}
}
// Driver program
int main()
{
int gd = DETECT, gm;
// Initialize graphics function
initgraph (&gd, &gm, "c++:\\tc\\bgi");
int X0 = 200, Y0 = 100, X1 = 300, Y1 = 200;
DDA(200,100, 300,200);
return 0;
}
