/*
Take a singly linked list as input and
print the size of the linked list.
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
        this->next=nullptr;
    }
};

int list_size(Node* &head){
    Node* temp=head;
    int size=0;
    while(temp not_eq nullptr){
        size++;
        temp=temp->next;
    }return size;
}

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

int main(){
    Node* head=nullptr;
    int value;
    while(cin>>value){
        if(value == -1) break;
        insert_at_tail(head, value);
    }
    cout<<list_size(head)<<endl;
    return 0;
}

//****Easiest solution*****
// int main(){
//     int value;
//     int size=0;
//     while(cin>>value){
//         if(value==-1)break;;
//         size++;
//     }
//     cout<<size<<endl;
// }
