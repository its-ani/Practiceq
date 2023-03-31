#include<iostream>
#include <iomanip>
using namespace std;

int main()  {
    // YOUR CODE GOES HERE
    // Please take input and print output to standard input/output (stdin/stdout)
    // E.g. 'cin' for input & 'cout' for output
    int a;
    long b;
    char c;
    float d;
    double e;
    cin>>a>>b>>c>>d>>e;
    cout<<a<<endl<<b<<endl<<c<<endl;
    //cout<<<<d<<endl<<e;
    /*std::fixed << std::setprecision(3)
    std::cout<<d
    std::fixed << std::setprecision(9)
    std::cout<<e
    */
    std::cout << std::setprecision(3) << d << '\n';
    std::cout << std::setprecision(9) << e << '\n';

    return 0;
}

