/*
Take a singly linked list as input, then print the maximum value of them.
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

int find_max(Node* head){
    int max = head->val;
    while(head->next not_eq nullptr){
        head = head->next;
        if(max < head->val)
            max = head->val;
    }
    return max;
}

int main(){
    Node* head=nullptr;
    Node* tail=nullptr;
    int val;
    while(cin>>val){
        if(val==-1)break;
        insert_element(head, tail, val);
    }
    cout<<find_max(head)<<endl;
    return 0;
}