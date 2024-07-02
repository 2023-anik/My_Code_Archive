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

void print(Node* head){
    if(head==NULL) return;
    cout<<head->val<<' ';
    print(head->next);
}

void print_reversely(Node* tail){
    if(tail==NULL)return;
    cout<<tail->val<<' ';
    print_reversely(tail->prev);
}

//for odd list
void reverse(Node* head, Node* tail){
    while(head!=tail && tail->next!=head){
        swap(head->val, tail->val);
        head=head->next;
        tail=tail->prev;
    }
}

int main(){
    Node* head=new Node(10);
    Node* a=new Node(20);
    Node* b=new Node(30);
    Node* tail=new Node(40);
    // Node* c=new Node(50);
    head->next=a;
    a->prev=head;
    a->next=b;
    b->prev=a;
    b->next=tail;
    tail->prev=b;
    // tail->next=c;
    // c->prev=tail;
    // tail=c;
    print(head);
    cout<<endl;
    print_reversely(tail);
    cout<<endl;
    reverse(head, tail);
    print(head);
    cout<<endl;
    cout<<head->val<<endl;
    cout<<tail->val<<endl;
    return 0;
}