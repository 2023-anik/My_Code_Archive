#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

class Node{
    public:
    int val;
    Node* next;

    /****constractor****/
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
    /*******************/
};

/***function for print all list's value***/
void print_list(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<endl;
        temp = temp->next;
    }
}

int main(){
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);

    head->next=a;
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=NULL;

    // cout<<head->val<<endl;                        // (*head).val=10
    // cout<<head->next->val<<endl;                  // (*(*head).next).val=20
    // cout<<head->next->next->val<<endl;            // (*(*(*head).next).next).val=30
    // cout<<head->next->next->next->val<<endl;      // (*(*(*(*head).next).next).next).val=40
    // cout<<head->next->next->next->next->val<<endl;// (*(*(*(*(*head).next).next).next).next)=50
    
    print_list(head);
    
    cout<<"Size of val: "<<sizeof(int)<<" bytes"<<endl;
    cout<<"Size of Node: "<<sizeof(Node*)<<" bytes"<<endl;
    cout<<"Total size: "<<sizeof(int)+sizeof(Node*)<<" bytes"<<endl;
    return 0;
}