#include<iostream>
#include<list>
#include<unordered_map>
using namespace std;

class Node{
    public:
        string name;
        list<string> nbrs;

        Node(string s){
            name = s;
        }
};

class Graph{
    unordered_map<string, Node*> m;

    public:
        Graph(vector<string> cities){
            for(auto city: cities){
                m[city] = new Node(city);
            }            
        }

        void addedge(string x, string y, bool undir = Flase){
            m[x]->nbrs.push_back(y);
            if(undir){
                m[y]->nbrs.push_back(x);    
            } 
        }

        void printadjlist(){
            for (auto citypair: m){
                auto city = citypair.first;
                Node *node = citypair.second;
                for(auto i : node->nbrs){
                    cout<<i<<", ";
                }
                cout<<endl;
            }
        }
};



int main(){ 

    vector<string> cities = {"Delhi", "Mumbai", "Chennai"};
    Graph g(cities);
// , "Chennai", "Hyderabad", "Bangalore", "Pune", "Ahmedabad"
    g.addedge("Delhi", "Mumbai");
    g.addedge("Mumbai", "Chennai");
    // g.addedge("Chennai", "Hyderabad");
    // g.addedge("Hyderabad", "Bangalore");
    // g.addedge("Delhi", "Hyderabad");

    g.printadjlist();

    return 0;
}