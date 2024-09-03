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

//recursivly print the list(reverse)
void print_list(Node* head){
    if(head==nullptr) return;
    print_list(head->next);
    cout<<head->val<<' ';
}

int main(){
    Node* head=new Node(10);
    Node* a=new Node(20);
    Node* b=new Node(30);
    Node* c=new Node(40);
    head->next=a;
    a->next=b;
    b->next=c;
    print_list(head);
    cout<<endl;
    return 0;
}