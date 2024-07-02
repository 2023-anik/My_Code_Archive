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

//Hare and Tortoise(fast and slow) Algo
bool cycle_detect(Node* head){
    Node* slow=head;
    Node* fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
            return true;//cycle detected
    }return false;
}

int main(){
    Node* head=new Node(10);
    Node* a=new Node(20);
    Node* b=new Node(30);
    Node* c=new Node(40);
    head->next=a;
    a->next=b;
    b->next=c;
    c->next=head;
    cout<<((cycle_detect(head))?"Cycle detected":"Not detected")<<endl;
    return 0;
}