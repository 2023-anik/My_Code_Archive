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

void check(Node* &head) {
    Node* temp = head;
    for (Node* i=temp; i!=NULL; i=i->next) {
        Node* prev=i;
        for (Node* j=i->next; j!=NULL; )
            if (i->val == j->val) {
                Node* duplicate = j;
                prev->next = j->next;
                j = j->next;
                delete duplicate;
            }else{
                prev=j;
                j=j->next;
            }
    }
}


void print_list(Node* head){
    while(head!=NULL){
        if(head->val!=-1)
            cout<<head->val<<' ';
        head=head->next;
    }
}

int main(){
    Node* head=NULL;
    Node* tail=NULL;
    int value;
    while(cin>>value){
        if(value==-1)break;
        insert(head, tail, value);
    }
    check(head);
    print_list(head);
    return 0;
}