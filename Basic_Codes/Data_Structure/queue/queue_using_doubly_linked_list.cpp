#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

class Node{
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};

class myQueue{
    public:
    Node* head=NULL;
    Node* tail=NULL;
    int sz=0;
    void push(int value){
        sz++;
        Node* newNode=new Node(value);
        if(head==NULL){
            head=newNode;
            tail=newNode;
            return;
        }
        tail->next=newNode;
        newNode->prev=tail;
        tail=newNode;
    }
    void pop(){
        sz--;
        Node* deleteNode=head;
        head=head->next;
        if(head==NULL)
            tail=NULL;
        else
            head->prev=NULL;
        delete deleteNode;
    }
    int front(){
        return head->val;
    }
    int size(){
        return sz;
    }
    bool empty(){
        return sz==0;
    }
};

int main(){
    myQueue q;
    cout<<q.size()<<endl;
    int n; cin>>n;
    for(int i=1; i<=n; ++i){
        int x; cin>>x;
        q.push(x);
    }
    cout<<q.size()<<endl;
    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
        cout<<q.size()<<endl;
    }
    cout<<q.size()<<endl;
    // q.push(10);
    // cout<<q.size()<<endl;
    // q.push(20);
    // cout<<q.size()<<endl;
    // cout<<q.front()<<endl;
    // q.pop();
    // cout<<q.size()<<endl;
    // cout<<q.front()<<endl;
    // q.pop();
    // cout<<q.size()<<endl;
    // // q.pop();-->segmentation fault
    // if(!q.empty()){
    //     // q.pop();
    // cout<<q.size()<<endl;
    // }
    return 0;
}