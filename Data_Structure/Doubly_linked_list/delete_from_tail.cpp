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
    while(head not_eq NULL){
        cout<<head->val<<' ';
        head=head->next;
    }cout<<endl;
}

void print_reversely(Node* tail){
    while(tail not_eq NULL){
        cout<<tail->val<<' ';
        tail=tail->prev;
    }cout<<endl;
}
/************######**************/
void delete_from_tail(Node* &tail){
    Node* deleteNode=tail;
    tail=tail->prev;
    delete deleteNode;
    tail->next=NULL;
    cout<<deleteNode->val<<endl;
}

int main(){
    Node* head=new Node(10);
    Node* a=new Node(20);
    Node* b=new Node(30);
    Node* tail=new Node(40);
    head->next=a;
    a->prev=head;
    a->next=b;
    b->prev=a;
    b->next=tail;
    tail->prev=b;

    delete_from_tail(tail);
    print_list(head);
    print_reversely(tail);
    return 0;
}