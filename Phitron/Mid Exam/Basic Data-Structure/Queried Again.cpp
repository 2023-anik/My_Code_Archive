/*
https://www.hackerrank.com/contests/mid-term-exam-a-basic-data-structures-a-batch-05/challenges/queries-again-1
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

void insert_at_head(Node* &head, Node* &tail, int value){
    Node* newNode=new Node(value);
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    newNode->next=head;
    head->prev=newNode;
    head=newNode;
}

void insert_at_tail(Node* &head, Node* &tail, int value){
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

void insert_at_any(Node* head, int index, int value){
    Node* newNode=new Node(value);
    for(int i=1; i<index; ++i)
        head=head->next;
    newNode->next=head->next;
    head->next->prev=newNode;
    head->next=newNode;
    newNode->prev=head;
}

int size(Node* head){
    int cnt=0;
    while(head!=NULL){
        cnt++;
        head=head->next;
    }return cnt;
}

void normal_print(Node* head){
    if(head==NULL)return;
    cout<<head->val<<' ';
    normal_print(head->next);
}

void abnormal_print(Node* tail){
    if(tail==NULL)return;
    cout<<tail->val<<' ';
    abnormal_print(tail->prev);
}

int main(){
    Node* head=NULL;
    Node* tail=NULL;
    int q; cin>>q;
    while(q--){
        int x, v; cin>>x>>v;
        if(x>size(head))cout<<"Invalid"<<endl;
        else{
            if(x==0) insert_at_head(head,tail, v);
            else if(x==size(head))insert_at_tail(head, tail, v);
            else insert_at_any(head, x, v);
            cout<<"L -> ";
            normal_print(head);
            cout<<endl;
            cout<<"R -> ";
            abnormal_print(tail);
            cout<<endl;
        }
    }
    return 0;
}