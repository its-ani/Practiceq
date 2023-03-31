#include<iostream>
#include<queue>
#include "Tree_Node.h"

using namespace std;

Treenode<int>* takeinput(){
    int data, ch;
    cout<<"Enter the data"<<endl;
    cin>>data;
    Treenode<int>* root = new Treenode<int>(data);
    cout<<"Enter the number of children of :"<<data<<endl;
    cin>>ch;

    for(int i=0;i<ch;i++){
        Treenode<int>* child;
        child = takeinput();
        root->children.push_back(child);
    }
    return root;
} 

Treenode<int>* levelinput(){
    int data, ch;
    queue<Treenode<int>*> q;
    cout<<"Enter the data"<<endl;
    cin>>data;
    Treenode<int>* root = new Treenode<int>(data);
    q.push(root);
    
    while(!q.empty()){
        Treenode<int>* front = q.front();
        int ch;
        q.pop();
        cout<<"Enter the number of children of :"<<front->data<<endl;
        cin>>ch;
        for(int i=0;i<ch;i++){
            cout<<"Enter the data of "<<i<<"th child of "<<front->data<<endl;
            cin>>data;
            Treenode<int>* node = new Treenode<int>(data);
            front->children.push_back(node);
            q.push(node);   
        }
    }
    return root;
}

void levelprint(Treenode<int>* root){
    queue<Treenode<int>*> q;
    q.push(root);

    while(!q.empty()){
        Treenode<int> * front = q.front();
        cout<<front->data<<" : ";
        for(int i=0;i<front->children.size();i++){
            cout<<front->children[i]->data<<" , ";
        }
        cout<<endl;
        q.pop();
        for(int i=0;i<front->children.size();i++){
            q.push(front->children[i]);
        }
    }
}

void print(Treenode<int>* root){
    cout<<root->data<<" : ";
    for(int i=0;i<root->children.size();i++){
        cout<<root->children[i]->data<<",";
    }
    cout<<endl;
    for(int i=0;i<root->children.size();i++){
        print(root->children[i]);
    }
}

int height(Treenode<int>* root){
    int ht = -1;

    for(int i=0;i<root->children.size();i++){
        int h = height(root->children[i]);
        ht = max(h,ht);
    }
    ht+=1;
    return ht;
}


int main(){

    // Treenode<int>* root = new Treenode<int>(1);
    // Treenode<int>* node1 = new Treenode<int>(2);
    // Treenode<int>* node2 = new Treenode<int>(3);
    // Treenode<int>* node3 = new Treenode<int>(4);
    
    // root->children.push_back(node1);
    // root->children.push_back(node2);
    // root->children.push_back(node3);
    
    // Treenode<int>* root = takeinput();

    Treenode<int>* root = levelinput();
    levelprint(root);
    cout<<endl<<"height of the tree : "<<height(root)<<endl;

    return 0;
}