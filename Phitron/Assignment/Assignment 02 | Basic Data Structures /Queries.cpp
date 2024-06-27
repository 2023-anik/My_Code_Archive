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

void insert_head(Node* &head, int value){
    Node* newNode=new Node(value);
    newNode->next=head;
    head=newNode;
}

void insert_tail(Node* &head, int value){
    Node* newNode=new Node(value);
    if(head==NULL){
        head=newNode;
        return;
    }
    Node* tmp=head;
    while(tmp->next!=NULL)
        tmp=tmp->next;
    tmp->next=newNode;
    tmp=newNode;
}

void delete_vth_idx(Node* &head, int index){
    if(head==NULL)return;
    if(index==0){
        Node* deleteNode=head;
        head=head->next;
        delete deleteNode;
        return;
    }
    Node* tmp=head;
    for(int i=0; i<index-1 && tmp->next!=NULL; i++)
        tmp=tmp->next;
    if(tmp->next==NULL)return;
    Node* deleteNode=tmp->next;
    tmp->next=tmp->next->next;
    delete deleteNode;
}

void print_list(Node* head){
    if(head==NULL)return;
    cout<<head->val<<' ';
    print_list(head->next);
}

int main(){
    Node* head=NULL;
    // Node* tail=NULL;
    int q; cin>>q;
    while(q--){
        int x, v;
        cin>>x>>v;
        if(x==0)insert_head(head, v);
        else if(x==1)insert_tail(head, v);
        else if(x==2)delete_vth_idx(head, v);
        print_list(head);
        cout<<endl;
    }
    return 0;
}