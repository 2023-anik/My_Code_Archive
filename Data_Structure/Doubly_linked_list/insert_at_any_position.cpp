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
        this->next=nullptr;
        this->prev=nullptr;
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

void insert_at_any_position(Node* &head, int position, int value){
    Node* newNode=new Node(value);
    Node* tmp=head;
    for(int i=1; i<position-1; ++i)
        tmp=tmp->next;
    newNode->next=tmp->next;
    tmp->next=newNode;
    newNode->next->prev=newNode;
    newNode->prev=tmp;
}

int size(Node* head){
    int cnt=0;
    while(head not_eq nullptr){
        cnt++;
        head=head->next;
    }return cnt;
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

    int posi, val;
    cin>>posi>>val;
    if(posi>size(head)){
        cout<<"Invalid position";
        return 0;
    }
    insert_at_any_position(head, posi, val);

    print_list(head);
    print_reversely(tail);
    return 0;
}