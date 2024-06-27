/*
Take a singly linked list as input and print the middle element.
If there are multiple values in the middle print both.
Sample 1
input: 2 4 6 8 10 -1
output: 6

Sample 2
input: 1 2 3 4 5 6 -1
output: 3 4
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

int traverse_and_print(Node* head, int position){
    Node* temp=head;
    for(int i=1; i<position; i++)
        temp=temp->next;
    return temp->val;
}

int main(){
    Node* head=nullptr;
    Node* tail=nullptr;
    int value;
    int size=0;
    while(cin>>value){
        if(value==-1)break;
        insert_element(head, tail, value);
        size++;
    }
    if(size%2==0)cout<<traverse_and_print(head, size/2)<<' '<<traverse_and_print(head, (size/2)+1)<<endl;
    else cout<<traverse_and_print(head, (size/2)+1)<<endl;
    return 0;
}