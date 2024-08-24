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

void insert(Node* &head, Node* &tail, int value){
    Node* newNode=new Node(value);
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
}

int max_val(Node* head){
    int max=head->val;
    while(head->next!=NULL){
        head=head->next;
        if(max<head->val)
            max=head->val;
    }return max;
}

int min_val(Node* head){
    int min=head->val;
    while(head->next!=NULL){
        head=head->next;
        if(min>head->val)
            min=head->val;
    }return min;
}

int main(){
    Node* head=NULL;
    Node* tail=NULL;
    int value;
    while(cin>>value){
        if(value==-1)break;
        insert(head, tail, value);
    }
    cout<<max_val(head)-min_val(head)<<endl;
    return 0;
}