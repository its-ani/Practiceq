#include<iostream>
#include<deque>

using namespace std;

int main(){

deque<int> dq={10,20,5,30};

auto it = dq.begin();

it = dq.insert(it,7);
it = dq.insert(it,2,3);
it = dq.erase(it+1);

cout<<(*it)<<endl;
cout<<(*(it+1))<<endl;
cout<<(*(it+2))<<endl;
for(int i = 0; i<dq.size(); i++){
    cout<<dq[i]<<" ";
}
return 0;
}
