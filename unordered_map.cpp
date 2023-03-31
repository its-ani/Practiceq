#include<iostream>
#include<algorithm>
#include<unordered_map> m;
using namespace std;

int main(){
unordered_map<string, int> m;
m["gfg"] = 45;
m["ide"] = 30;
m["ide"] = 40;
m.insert({"courses", 25});
//To check whether the element is found or not
/*if(m.find("ide") != m.end())
    cout<<"Found \n";
else
    cout<<"Not Found \n";*/
//To fund the value
auto it = m.find("ide");
if(it != m.end()){
    cout<<(it->second)<<endl;
}
for(auto it = m.begin(); it!= m.end(); it++){
    cout<<(it->first)<<" "<<(it->second)<<endl;
}
cout<<m.size()<<endl;
m.erase(m.begin());
cout<<m.size();
/*for(auto x: m)
    cout<<x.first<<" "<<x.second<<endl;
    return 0;*/
}

// Count is the substitute of find function it will return either 0 or 1
// Size returns the number of key value pairs.
// Erase will remove the key value pair corresponding to that key it will take 1 o2 parameters in case of 2 parameters it will delete from the starting to the end - 1 values.
