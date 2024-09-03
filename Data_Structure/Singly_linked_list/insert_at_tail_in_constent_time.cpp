#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};

//insertion in O(1) TC
void insert_at_tail(Node* &head, Node* &tail, int value){
    Node* newNode=new Node(value);
    if(head==nullptr){
        head=newNode;
        tail=newNode;
        cout<<value<<" Inserted"<<endl<<endl;
        return;
    }
    tail->next=newNode;
    tail=newNode;
    cout<<value<<" Inserted"<<endl<<endl;
}

void print_list(Node* head){
    if(head==nullptr){
        cout<<"Empty list"<<endl<<endl;
        return;
    }
    cout<<"List: ";
    Node* temp=head;
    while(temp not_eq nullptr){
        cout<<temp->val<<' ';
        temp=temp->next;
    }cout<<endl<<endl;
}

int main(){
    Node* a=new Node(10);
    Node* b=new Node(20);
    Node* c=new Node(30);
    Node* d=new Node(40);
    Node* head=a;
    head->next=b;
    b->next=c;
    c->next=d;
    Node* tail=d;
    // cout<<head->next->next->next->val<<endl;
    // cout<<tail->val<<endl;
    insert_at_tail(head, tail, 50);
    // cout<<tail->val<<endl;
    print_list(head);
    return 0;
}