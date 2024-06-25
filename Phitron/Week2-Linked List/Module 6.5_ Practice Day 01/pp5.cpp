/*
Take a singly linked list as input and check if the linked list is sorted in 
ascending order.
*/

#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

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

int main(){
    Node* head=nullptr;
    int value;
    while(cin>>value){
        if(value == -1) break;
        insert_at_tail(head, value);
    }
    Node* temp=head;
    int cek_val=temp->val;
    while(temp->next not_eq nullptr){
        temp=temp->next;
        if(cek_val>temp->val){
            no;
            return 0;
        }cek_val=temp->val;
    }
    yes;
    return 0;
}