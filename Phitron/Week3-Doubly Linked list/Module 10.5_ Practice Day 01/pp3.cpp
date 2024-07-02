/*
Take a doubly linked list as input and check if it forms any palindrome or not.
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

bool check_palindrome(Node* head, Node* tail){
    while(head!=tail){
        if(head->val!=tail->val)
            return false;
        head=head->next;
        tail=tail->prev;
    }return true;
}

int main(){
    Node* head=NULL;
    Node* tail=NULL;
    int val;
    while(cin>>val){
        if(val==-1)break;
        insert(head, tail, val);
    }
    cout<<((check_palindrome(head, tail))?"YES":"NO")<<endl;
    return 0;
}