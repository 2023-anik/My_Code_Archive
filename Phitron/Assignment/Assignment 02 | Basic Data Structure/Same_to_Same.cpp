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

void insert(Node* &head, Node* &tail, int value){
    Node* newNode=new Node(value);
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
}

bool check(Node* head1, Node* head2){
    while(head1!=NULL){
        if(head1->val != head2->val)
            return false;
        head1=head1->next;
        head2=head2->next;
    }return true;
}

int main(){
    Node* head1=NULL;
    Node* tail1=NULL;
    int size1=0;
    int value;
    while(cin>>value){
        if(value==-1)break;
        insert(head1, tail1, value);
        size1++;
    }
    Node* head2=NULL;
    Node* tail2=NULL;
    int size2=0;
    while(cin>>value){
        if(value==-1)break;
        insert(head2, tail2, value);
        size2++;
    }
    if(size1!=size2){
        cout<<"NO"<<endl;
        return 0;
    }
    cout<<((check(head1, head2))?"YES":"NO");
    return 0;
}