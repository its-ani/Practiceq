#include<iostream>
#include<list>

using namespace std;

class graph{

    int v;
    list<int> *l;

    public:
        graph(int v){
            this->v = v;
            l = new list<int>[v]; 
        }

    void addedge(int i, int j, bool undir = true){
        l[i].push_back(j);
        if(undir){
            l[j].push_back(i);
        }
    }
n
    void gprint(){
        for(int i=0;i<v;i++){
            cout<<i<<"->";
            for(auto node:l[i]){
                cout<<node<<", ";
            }
            cout<<endl;
        }
    }

};

int main(){

    graph g(6);

    g.addedge(0,1);
    g.addedge(0,4);
    g.addedge(2,1);
    g.addedge(3,4);
    g.addedge(4,5);
    g.addedge(2,3);
    g.addedge(3,5);
    g.addedge(6,5);
    
    g.gprint();

    return 0;
}