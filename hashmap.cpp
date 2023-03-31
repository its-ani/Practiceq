#include<iostream>
#include<unordered_map>
#include<map>
#include<vector>
#include<string>

using namespace std;

// .at function retrieves the value present in the hashmap
// .insert function inserts the value in the hashmap
// if we use mapname['xyz'] to get the value if the key 'xyz' is present then its fine else it will create the key 'xyz' and assign it with 0 which we dont want hence need to use this judiciously
// in order to chcek if a value is present or not we cam use count function
// if (mapname.count('key_name') > 0) then key exist else it doesnt.
// if want to erase then use mapname.erase('keyname') 
// mp.find("abc") always return an iterator
// mp.erase(it,it+4)  will delete values from it to it+3 (it is the iterator pointing towards a address)


int main(){

    map<string, int> mp;

    mp.insert({"abc", 1});
    mp.insert({"bcd", 2});
    mp.insert({"cde", 3});
    mp.insert({"def", 4});
    // cout<<arr.begin()<<endl;
    
    map<string, int>::iterator it;

    it = mp.begin();

    while(it!=mp.end()){
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }

    return 0;
}