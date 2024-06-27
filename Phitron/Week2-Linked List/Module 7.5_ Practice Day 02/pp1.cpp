/*
Take two singly linked lists as input and check if their sizes are same or not.
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

int size_of_list(Node* head){
    int size=0;
    while(head not_eq nullptr){
        size++;
        head=head->next;
    }
    return size;
}

bool size_same_or_not(Node* l1, Node* l2){
    return size_of_list(l1)==size_of_list(l2);
}

int main(){
    Node* head1=nullptr;
    Node* tail1=nullptr;
    int value1;
    while(cin>>value1){
        if(value1==-1)break;
        insert_element(head1, tail1, value1);
    }
    Node* head2=nullptr;
    Node*tail2=nullptr;
    int value2;
    while(cin>>value2){
        if(value2==-1)break;
        insert_element(head2, tail2, value2);
    }
    cout<<((size_same_or_not(head1, head2))?"YES":"NO")<<endl;
    return 0;
}
