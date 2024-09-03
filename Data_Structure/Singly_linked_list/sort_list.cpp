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

void ascending_sort(Node* &head){
    Node* temp=head;
    for(Node* i=temp; i->next not_eq nullptr; i=i->next)
        for(Node* j=i; j not_eq nullptr; j=j->next)
            if(i->val > j->val)
                swap(i->val, j->val);
    cout<<endl;
}

void descending_sort(Node* &head){
    Node* temp=head;
    for(Node* i=temp; i->next not_eq nullptr; i=i->next)
        for(Node* j=i; j not_eq nullptr; j=j->next)
            if(i->val < j->val)
                swap(i->val, j->val);
    cout<<endl;
}

void print_list(Node* head){
    if(head==nullptr) return;
    cout<<head->val<<' ';
    print_list(head->next);
}

int main(){
    Node* head=new Node(50);
    Node* a=new Node(20);
    Node* b=new Node(10);
    Node* c=new Node(40);
    head->next=a;
    a->next=b;
    b->next=c;
    print_list(head);
    ascending_sort(head);
    cout<<"In ascending order\n";
    print_list(head);
    cout<<endl;
    
    descending_sort(head);
    cout<<"In descengin order\n";
    print_list(head);
    cout<<endl;
    return 0;
}