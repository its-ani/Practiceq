#include<vector>
using namespace std;

template<typename T>

class Treenode{
    public:
        T data;
        vector<Treenode<T> *> children; 

    Treenode(T data){
        this->data = data;
    }
};