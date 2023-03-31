#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
        int data;
        node*left;
        node*right;

        node(int d){
            data = d;
            left = NULL;
            right = NULL;
        }
};

node* buildTree(){
    int d;
    cin>>d;

    if(d == -1){
        return NULL;
    }
    node * root = new node(d);
    root->left = buildTree();
    root->right = buildTree();
    return root;
}

void preorder(node *root){
    if(root==NULL){
        return;
    }
    //Otherwise, print root first followed by subtrees(children)
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(node *root){

    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

}

void postorder(node *root){

    if(root == NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int height(node*root){
    if(root == NULL){
        return 0;
    }

    int ls = height(root->left);
    int rs = height(root->right);

    return max(ls,rs) + 1;
}

void printkthlevel(node*root, int k){

    if(root == NULL){
        return;
    }

    if(k==1){
        cout<<root->data<<" ";
        return;
    }
    printkthlevel(root->left,k-1);
    printkthlevel(root->right,k-1);
    return;
}

void printalllevel(node *root){

    int h = height(root);

    for(int i=1;i<=h;i++){
        printkthlevel(root,i);
        cout<<endl;
    }
    return;
}

void bfs(node*root){

    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){

        node *f = q.front();
        if(f==NULL){
            cout<<endl;
            q.pop();
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<f->data<<" , ";
            q.pop();
            if(f->left){
                q.push(f->left);
            }
            if(f->right){
                q.push(f->right);
            }
        }
    }
    return;
}

int count(node*root){

    if(root == NULL){
        return 0;
    }
    return 1 + count(root->left) + count(root->right);
}

int sum(node*root){

    if(root == NULL){
        return 0;
    }
    return root->data + sum(root->left) + sum(root->right);
}

int diameter(node*root){
    if(root== NULL){
        return 0;
    }

    int h1 = height(root->left);
    int h2 = height(root->right);

    int op1 = h1+h2;
    int op2 = diameter(root->left);
    int op3 = diameter(root->right);

    return max(op1, max(op2,op3));
}

class Pair{

public:
    int height;
    int diameter;
};

Pair fastdiameter(node*root){

    Pair p;

    if(root == NULL){
        p.diameter = p.height = 0;
        return p;
    }
    Pair left = fastdiameter(root->left);
    Pair right = fastdiameter(root->right);

    p.height = max(left.height,right.height) + 1;
    p.diameter = max(left.height + right.height, max(left.diameter,right.diameter));

    return p;
}

int replacesum(node* root){

    if(root == NULL){
        return 0;
    }
    if(root->left == NULL && root->right ==NULL){
        return root->data;
    }
    int leftsum = replacesum(root->left);
    int rightsum = replacesum(root->right);

    int temp = root->data;
    root->data = leftsum + rightsum;
    return temp + root->data;

}

int main(){

    node* root = buildTree();
    /*
    preorder(root);
    cout<<endl;
    inorder(root);
    cout<<endl;
    postorder(root);
    cout<<endl;
    cout<<height(root)<<endl;
    printkthlevel(root,3);
    printalllevel(root);
    cout<<count(root)<<endl;
    bfs(root);
    cout<<sum(root);
*/
    //cout<<diameter(root)<<endl;
    //printalllevel(root);
    //Pair p = fastdiameter(root);
    //cout<<p.height<<endl;
    //cout<<p.diameter<<endl;

    bfs(root);
    cout<<endl;
    replacesum(root);
    bfs(root);


return 0;
}


/*
8
10
1
-1
-1
6
9
-1
-1
7
-1
-1
3
-1
14
13
-1
-1
-1
*/






