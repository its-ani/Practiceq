#include<iostream>
#include<stack>

using namespace std;

int main()
{

stack<int> s;

s.push(10);
s.push(20);
s.push(30);
s.push(40);

while (s.empty() == false){
    cout<<s.top()<<endl;
    s.pop();
}
}

// empty function returns true when the stack is not empty after that it returns false.
