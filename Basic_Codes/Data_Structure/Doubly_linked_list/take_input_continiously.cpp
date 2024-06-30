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

void normal_print(Node* head){
    while(head not_eq NULL){
        cout<<head->val<<' ';
        head=head->next;
    }cout<<endl;
}

void reverse_print(Node* tail){
    while(tail not_eq NULL){
        cout<<tail->val<<' ';
        tail=tail->prev;
    }cout<<endl;
}
/************######*************/
void insert_at_tail(Node* &head, Node* &tail, int value){
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

int main(){
    Node* head=NULL;
    Node* tail=NULL;
    int value;
    while(1){
        cin>>value;
        if(value==-1)break;
        insert_at_tail(head, tail, value);
    }

    normal_print(head);
    reverse_print(tail);
    return 0;
}