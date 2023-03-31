#include<iostream>
#include<vector>

using namespace std;

void get_add(int x, int y, int *mptr, int *optr)
{
   *mptr = x*y;
   *optr = x+y;

}
int main()
{
    int x = 10, y = 20,a,m;
    get_add(x, y, &a, &m);
    cout<<a<<" "<<m<<" ";
    return 0;
}

