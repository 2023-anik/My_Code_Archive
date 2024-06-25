/*
Take a singly linked list as input, then take q queries. In each query you will
be given an index and value. You need to insert those values in the given index
and print the linked list. If the index is invalid print “Invalid”.
*/
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

void insert_at_tail(Node* &head, int value){
    Node* newNode=new Node(value);
    if(head==nullptr){
        head=newNode;
        return;
    }
    Node* temp=head;
    while(temp->next not_eq nullptr)
        temp=temp->next;
    temp->next=newNode;
}

void insert_at_head(Node* &head, int value){
    Node* newNode=new Node(value);
    newNode->next=head;
    head=newNode;
}

bool insert_at_any_position(Node* &head, int position, int value){
    if(position==0){
        insert_at_head(head, value);
        return true;
    }
    Node* newNode=new Node(value);
    Node* temp=head;
    for(int i=0; i<position-1; ++i){
        if(temp->next == nullptr)
            return false;
        temp=temp->next;
    }
    newNode->next=temp->next;
    temp->next=newNode;
    return true;
}

void print_list(Node* &head){
    Node* temp=head;
    while(temp not_eq nullptr){
        cout<<temp->val<<' ';
        temp=temp->next;
    }cout<<endl;
}

int main(){
    Node* head=nullptr;
    int value;
    while(cin>>value){
        if(value == -1) break;
        insert_at_tail(head, value);
    }
    int q; cin>>q;
    while(q--){
        int index, value;
        cin>>index>>value;
        if(insert_at_any_position(head, index, value))
            print_list(head);
        else cout<<"Invalid"<<endl;
    }
    return 0;
}