#include<iostream>
using namespace std;

class node{
public:
    int data;
    node*next;
    node(int d){
    data = d;
    next = NULL;
    }
};

//Linked linklist (object oriented)
/* class LinkedList{
    node* head;
    node* tail;
public:
    LinkedList(){
    }
    void insert(int d){
    }
 };
 */

//Function (Procedural Programming)
void build(){

}
// Passing a pointer by reference
void insertathead(node*&head, int d){
    if(head == NULL){
        head = new node(d);
        return;
    }
    node *n = new node(d);
    n->next = head;
    head = n;
}
//In print we have passed it by value hence in each respective call head will get back to initial position
//In case if we have passed it by reference then it will print the values only one time
void print(node*head)
{
    while(head!= NULL){
        cout<<head->data<<"->";
        //cout<<head->next<<"->"<<endl;
        head = head->next;
    }
    cout<<endl;
}

int length(node*head){
    int cnt =0;
    while(head!=NULL){
        cnt++;
        head = head->next;
    }
    return cnt;
}
void insertattail(node*&head, int data){
    if(head == NULL){
        head = new node(data);
        return;
    }
    node*tail = head;
    while(tail->next!= NULL){
        tail = tail->next;
    }
    tail->next = new node(data);
    return;
}

void insertinmiddle(node*&head, int data, int p){

    if(head ==NULL or p==0){
        insertathead(head,data);
        return;
    }
    else if(p>length(head)){
            insertattail(head,data);
    }
    else{
        //take p-1 jumps
        int jump=1;
        node*temp = head;
        while(jump<=p-1){
            temp=temp->next;
            jump++;
        }
        node*n = new node(data);
        n->next = temp->next;
        temp->next = n;
    }
}

void deletehead(node*&head){
    if(head == NULL){
        return;
    }
    node*temp = head->next;
    delete head;
    head = temp;

}

bool search(node*head, int key){

    node*temp= head;
    while(temp!= NULL){
        if(head->data == key){
            return true;
        }
        head = head->next;
    }
        return false;
}

void searche(node*head,int key){
node*val = head;
int pos = 1;
while(val != NULL){
        pos++;
    if(head->data = key){
        cout<<head->data<<" "<<pos++;
    }
    head = head->next;
}
}

void take_input(node*&head){
}

node* take_input()
 {
    int d;
    cin>>d;
    node*head;
    while(d!=-1){
        insertathead(head,d);
        cin>>d;
    }
    return head;
}
void reversed(node*head){
node* c = head;
node* p = NULL;
node* n;

while(c!= NULL){
    n = c->next;
    c->next = p;
    p=c;
    c=n;
}
head = p;
}

int main(){

    /*node*head = take_input();
    print(head);*/
    node*head = NULL;
    insertathead(head,5);
    insertathead(head,2);
    insertathead(head,1);
    insertathead(head,0);
    print(head);
    insertinmiddle(head,4,3);
    insertattail(head,7);
    print(head);
    cout<<endl<<"Before search";
    //searche(head,5);
    cout<<endl<<"After search";
    deletehead(head);
    cout<<endl;
    print(head);
    reversed(head);
    print(head);
    cout<<endl;

    if(search(head,9)){
        cout<<"Element Found";
    }
    else{
        cout<<"Not Found";
    }
    return 0;
}




