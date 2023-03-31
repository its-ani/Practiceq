#include<iostream>
#include<unordered_set>

using namespace std;

int main(){
unordered_set<int> s;
s.insert(10);
s.insert(5);
s.insert(15);
s.insert(20);
s.insert(20);
/*for(int x: s){
    cout<<x<<" ";
}*/
if(s.find(15) == s.end()){
    cout<<"Not found"<<endl;}
else
    cout<<"Found "<<(*s.find(15))<<endl;

for(auto it= s.begin(); it != s.end(); it++){
    cout<<(*it)<<" ";
}
cout<<endl;
cout<<s.size()<<" ";
s.erase(15);
cout<<s.size()<<" ";
auto it = s.find(10);
s.erase(it);
s.clear();
return 0;
}
// Insert function is used to insert values in the unordered set.
// Find function finds the value whether it is present or not if present it returns the iterator of that value (address of that value) if not present it will return s.end().
// Count function is the substitute of the find function it will returns either 0 or 1 if the values are not present or present.
// ERASE is used to erase the values it takes one or two parameters in case of two parameters it erase the value from first parameter to the last - 1 .s
