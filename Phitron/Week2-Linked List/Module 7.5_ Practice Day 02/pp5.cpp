/*
Take a singly linked list as input and sort it
in descending order. Then print the list.
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

void insert_element(Node* &head, Node* &tail, int value){
    Node* newNode=new Node(value);
    if(head==nullptr){
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
}

void decreasing_order_sort(Node* &head){
    // Node* temp=head;
    for(Node* i=head; i->next not_eq nullptr; i=i->next)
        for(Node* j=i; j not_eq nullptr; j=j->next)
            if(i->val<j->val)
                swap(i->val, j->val);
}

void print_list(Node* head){
    while(head not_eq nullptr){
        cout<<head->val<<' ';
        head=head->next;
    }
}

int main(){
    Node* head=nullptr;
    Node* tail=nullptr;
    int value;
    while(cin>>value){
        if(value==-1)break;
        insert_element(head, tail, value);
    }
    decreasing_order_sort(head);
    print_list(head);
    return 0;
}