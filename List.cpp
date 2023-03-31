#include<iostream>
#include"LinkList_Node_class.cpp"
using namespace std;

Node* takeinput(){
     int data;
     Node *head = NULL;
     Node *tail= NULL;
     cin>>data;
     while(data!=-1){
        Node* newnode = new Node(data);     
        if(head == NULL){
            head = newnode;
            tail = newnode;
        }else{
            tail->next = newnode;
            tail = tail->next;
            // Node *temp = head;
            // while(temp->next!=NULL){
            //     temp = temp->next;
            // }
            // temp->next = newnode;
        }
        cin>>data;
     }
     return head;
}

void print(Node * head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}

int main(){

    // Node n1(10);
    // Node *head = &n1;

    // Node n2(20);
    // n1.next = &n2;

    // cout<<head<<" "<<&n1<<" " << n1.data<<" "<<n1.next<<" "<<&n2 <<" "<< n2.data << " "<<n2.next <<endl;

    Node* head = takeinput();
    print(head);

    return 0;
} 