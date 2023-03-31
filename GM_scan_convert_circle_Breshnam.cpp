#include<iostream>
#include<graphics.h>
using namespace std;
void bresenhamCircle(int xc, int yc, int x, int y)
{
// Function to put pixels at subsequence points
putpixel(xc+x, yc+y, YELLOW);
putpixel(xc-x, yc+y, YELLOW);
putpixel(xc+x, yc-y, YELLOW);
putpixel(xc-x, yc-y, YELLOW);
putpixel(xc+y, yc+x, YELLOW);
putpixel(xc-y, yc+x, YELLOW);
putpixel(xc+y, yc-x, YELLOW);
putpixel(xc-y, yc-x, YELLOW);
}
// Function for circle-generation using Bresenham's algorithm
void circleBres(int xc, int yc, int r)
{
int x = 0, y = r;
int d = 3 - 2 * r;
bresenhamCircle(xc, yc, x, y);
while (y >= x)
{
// for each pixel we will draw all eight pixels
x++;
// check for decision parameter and correspondingly update d, x, y
if (d > 0)
{y--;
d = d + 4 * (x - y) + 10;}
else
d = d + 4 * x + 6;
bresenhamCircle(xc, yc, x, y);
delay(30);
}}
// Driver code
int main()
{
int xc = 219, yc = 229, r2 = 120;
int gd = DETECT, gm;
initgraph(&gd, &gm, "c++:\\tc\\bgi"); // initialize graph
circleBres(xc, yc, r2); // function call
return 0;
}
