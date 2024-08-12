/*
Take two stacks of size N and M as input and check if both of them are the same or not. Don’t use STL to solve this problem.
*/

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

class myStack{
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
        Node* deleteNode=tail;
        tail=tail->prev;
        if(tail==NULL){
            head=NULL;
        }
        else tail->next=NULL;
        delete deleteNode;
    }
    int top(){
        return tail->val;
    }
    int size(){
        return sz;
    }
    bool empty(){
        return sz==0;
    }
};

int main(){
    myStack s1, s2;
    int n, m;
    cin>>n;
    for(int i=0; i<n; ++i){
        int x; cin>>x;
        s1.push(x);
    }
    cin>>m;
    for(int i=0; i<m; ++i){
        int x; cin>>x;
        s2.push(x);
    }
    if(n!=m){
        cout<<"NO"<<endl;
        return 0;
    }
    for(int i=0; i<n; ++i){
        if(s1.top()!=s2.top()){
            cout<<"NO"<<endl;
            return 0;
        }
        s1.pop(); s2.pop();
    }
    cout<<"YES"<<endl;
    return 0;
}