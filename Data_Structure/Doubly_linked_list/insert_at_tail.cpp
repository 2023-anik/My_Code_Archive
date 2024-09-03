#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

class Node{
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};

void print_list(Node* head){
    while(head!=nullptr){
        cout<<head->val<<' ';
        head=head->next;
    }cout<<endl;
}

void print_reversely(Node* tail){
    while(tail!=nullptr){
        cout<<tail->val<<' ';
        tail=tail->prev;
    }cout<<endl;
}
/************######**************/
void insert_at_tail(Node* &tail, Node* &head, int value){
    Node* newNode=new Node(value);
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    newNode->prev=tail;
    tail=newNode;
}

int main(){
    // Node* head=new Node(10);
    // Node* a=new Node(20);
    // Node* b=new Node(30);
    // Node* tail=new Node(40);
    // head->next=a;
    // a->prev=head;
    // a->next=b;
    // b->prev=a;
    // b->next=tail;
    // tail->prev=b;

    //check is inserted at tail correctly when the head=NULL<=>tail=NULL
    Node* head=NULL;
    Node* tail=NULL;
    insert_at_tail(tail, head, 50);
    print_list(head);
    print_reversely(tail);

    insert_at_tail(tail, head, 60);
    print_list(head);
    print_reversely(tail);
    return 0;
}