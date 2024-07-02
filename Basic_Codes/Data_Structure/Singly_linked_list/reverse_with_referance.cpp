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

void print(Node* head){
    if(head==NULL)
        return;
    cout<<head->val<<' ';
    print(head->next);
}

void reverse_with_referance(Node* &head, Node* crnt){
    if(crnt->next==NULL){
        head=crnt;
        return;
    }
    reverse_with_referance(head, crnt->next);
    crnt->next->next=crnt;
    crnt->next=NULL;
}

int main(){
    Node* head=new Node(10);
    Node* a=new Node(20);
    Node* b=new Node(30);
    head->next=a;
    a->next=b;
    print(head);
    cout<<endl;
    reverse_with_referance(head, head);
    print(head);
    return 0;
}