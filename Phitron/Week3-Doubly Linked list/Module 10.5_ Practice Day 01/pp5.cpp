/*
Take a doubly linked list as input and sort it in ascending order. Then print the list.
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
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    newNode->prev=tail;
    tail=newNode;
}

void Sort(Node* head){
    for(auto i=head; i->next!=NULL; i=i->next){
        for(auto j=i->next; j!=NULL; j=j->next){
            if(i->val>j->val){
                swap(i->val, j->val);
            }
        }
    }
}

void print(Node* head){
    while(head!=NULL){
        cout<<head->val<<' ';
        head=head->next;
    }cout<<endl;
}

int main(){
    Node* head=NULL;
    Node* tail=NULL;
    int v;
    while(cin>>v){
        if(v==-1)break;
        insert(head, tail, v);
    }
    Sort(head);
    print(head);
    return 0;
}