#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

class Node{
    public:
    int val;
    Node* next;

    /****constractor****/
    Node (int value):val(value),next(nullptr){}
};

void insert_at_tail(Node* &head, int value){
    Node* newNode=new Node(value);
    if(head == nullptr){
        head=newNode;
        return;
    }
    Node* temp=head;
    while(temp->next not_eq nullptr)
        temp=temp->next;
    temp->next=newNode;
}

void print_list(Node* &head){
    Node* temp=head;
    cout<<"Elements of the list: ";
    while(temp not_eq nullptr){
        cout<<temp->val<<' ';
        temp=temp->next;
    }cout<<endl;
}

int main(){
    Node* head=nullptr;
    int value;
    while(cin>>value){
        if(value == -1) break;
        insert_at_tail(head, value);
    }
    print_list(head);
    return 0;
}