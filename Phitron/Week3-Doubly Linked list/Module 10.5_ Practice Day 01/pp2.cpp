/*
Take a doubly linked list as input and reverse it. After that print the linked list.
*/

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

void insert(Node* &head, Node* &tail, int value){
    Node* newNode=new Node(value);
    if(tail==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    newNode->prev=tail;
    tail=newNode;
}

void reverse(Node* head, Node* tail){
    while(head!=tail && head->next!=tail){
        swap(head->val, tail->val);
        head=head->next;
        tail=tail->prev;
    }
    swap(head->val, tail->val);
}

void print(Node* head){
    if(head==NULL)return;
    cout<<head->val<<' ';
    print(head->next);
}

int main(){
    Node* head=NULL;
    Node* tail=NULL;
    int val;
    while(cin>>val){
        if(val==-1)break;
        insert(head, tail, val);
    }
    reverse(head, tail);
    print(head);
    return 0;
}