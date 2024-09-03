#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
/************######**************/
class Node{
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val=val;
        this->next=nullptr;
        this->prev=nullptr;
    }
};
/************######**************/
void print_list(Node* head){
    while(head!=nullptr){
        cout<<head->val<<' ';
        head=head->next;
    }
    cout<<endl;
}
/************######**************/
void print_reversely(Node* tail){
    while(tail!=nullptr){
        cout<<tail->val<<' ';
        tail=tail->prev;
    }
    cout<<endl;
}

int main(){
    Node* head=new Node(10);
    Node* a=new Node (20);
    Node* b=new Node(30);
    head->next=a;
    a->prev=head;
    a->next=b;
    b->prev=a;
    Node* tail=b;

    print_list(head);
    print_reversely(tail);
    return 0;
}