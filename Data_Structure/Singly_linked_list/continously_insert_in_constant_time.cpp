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

void insert_at_tail_in_constant_time(Node* &head, Node* &tail, int value){
    Node* newNode=new Node(value);
    if(head==nullptr){
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
}

void print_list(Node* head){
    while(head not_eq nullptr){
        cout<<head->val<<' ';
        head=head->next;
    }cout<<endl;
}

int main(){
    Node* head=NULL;
    Node* tail=NULL;
    int value;
    while(cin>>value){
        if(value==-1) break;
        insert_at_tail_in_constant_time(head, tail, value);
    }
    print_list(head);
    return 0;
}