#include<iostream>
#include<vector>
using namespace std;
//We have define our own class stack which can take any value
template<typename T, typename U>
class stack{
private:
    vector<T> v;
    vector<U> v2;
public:
    void push(T data){
        v.push_back(data);
    }
    bool empty(){
        return v.size()==0;
    }
    void pop(){
        if(!empty()){
            v.pop_back();
        }
    }
    T top(){
        return v[v.size()-1];
    }
};
int main()
{
    stack<char, int> s;
    for(int i=65; i<=75;i++){
        s.push(i);
    }
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}
