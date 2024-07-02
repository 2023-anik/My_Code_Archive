/*
Take two doubly linked lists as input and check if they are the same or not.
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

bool check(Node* head1, Node* head2){
    while(head1!=NULL){
        if(head1->val!=head2->val)
            return false;
        head1=head1->next;
        head2=head2->next;
    }return true;
}

int main(){
    Node* head1=NULL;
    Node* tail1=NULL;
    int val;
    int size1=0;
    while(cin>>val){
        if(val==-1)break;
        insert(head1, tail1, val);
        size1++;
    }
    int size2=0;
    Node* head2=NULL;
    Node* tail2=NULL;
    while(cin>>val){
        if(val==-1)break;
        insert(head2, tail2, val);
        size2++;
    }
    if(size1!=size2){
        cout<<"NO"<<endl;
        return 0;
    }
    cout<<((check(head1, head2))?"YES":"NO")<<endl;
    return 0;
}