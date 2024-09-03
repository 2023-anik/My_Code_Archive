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

//except from head and tail
/************######**************/
void delete_from_any_position(Node* &head, int position){
    Node* tmp=head;
    for(int i=1; i<position-1; ++i)
        tmp=tmp->next;
    Node* deleteNode=tmp->next;
    tmp->next=tmp->next->next;
    tmp->next->prev=tmp;
    delete deleteNode;
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

    delete_from_any_position(head, 2);
    print_list(head);
    print_reversely(tail);
    return 0;
}