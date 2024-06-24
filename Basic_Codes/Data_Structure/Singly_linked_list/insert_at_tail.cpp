#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

class Node{
    public:
    int val;
    Node* next;

    /****constractor****/
    // Node(int value):val(value), next(nullptr){}
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
    /*******************/
};

void insert_at_tail(Node* &head, int &x){
    Node* newNode=new Node(x);
    if(head==NULL){
        head=newNode;
        cout<<"Successfully inserted:)"<<endl;
        return;
    }
    Node* temp=head;
    while(temp->next!=NULL)
        temp=temp->next;
    temp->next=newNode;
    newNode->next=NULL;
    cout<<"Successfully inserted:)"<<endl;
}

int main(){
    Node* head=NULL;
    return 0;
}