/*
Take a singly linked list as input and print the middle element.
If there are multiple values in the middle print both.
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

int print_any_position_value(Node* &head, int posi){
    Node* temp=head;
    for(int i=1; i<posi; i++)
        temp=temp->next;
    return temp->val;
}

int main(){
    Node* head=nullptr;
    int value;
    int posi=0;
    while(cin>>value){
        if(value==-1)break;
        insert_at_tail(head, value);
        posi++;
    }
    if(posi%2 not_eq 0)cout<<print_any_position_value(head,(posi/2)+1)<<endl;
    else cout<<print_any_position_value(head, posi/2)<<' '<<print_any_position_value(head, (posi/2)+1)<<endl;
    return 0;
}