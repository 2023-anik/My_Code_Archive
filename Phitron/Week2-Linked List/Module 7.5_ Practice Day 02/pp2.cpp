/*
Take a singly linked list as input and print the reverse of the linked list.
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

void reverse_print(Node* head){
    if(head == nullptr) return;
    reverse_print(head->next);
    cout<<head->val<<' ';
}

int main(){
    Node* head=nullptr;
    Node* tail=nullptr;
    int value;
    while(cin>>value){
        if(value==-1)break;
        insert_element(head, tail, value);
    }
    reverse_print(head);
    cout<<endl;
    return 0;
}