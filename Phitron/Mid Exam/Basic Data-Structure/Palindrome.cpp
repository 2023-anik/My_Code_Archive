/*
https://www.hackerrank.com/contests/mid-term-exam-a-basic-data-structures-a-batch-05/challenges/palindrome-26-2/problem
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

bool palindrome_check(Node* head, Node* tail){
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
    int v;
    while(cin>>v){
        if(v==-1)break;
        insert(head, tail, v);
    }
    cout<<((palindrome_check(head, tail))?"YES":"NO")<<endl;
    return 0;
}