/*
https://www.hackerrank.com/contests/assignment-03-a-basic-data-structure-a-batch-05/challenges/same-or-not-4
*/

#include<bits/stdc++.h>
using namespace std;

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
    int size=0;

    void push(int val){
        size++;
        Node* newNode=new Node(val);
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
        size--;
        if(head==tail){
            delete head;
            head=NULL;
            tail=NULL;
            return;
        }
        Node* temp=head;
        head=head->next;
        delete temp;
    }

    bool isEmpty(){
        return size==0;
    }

    int front(){
        return head->val;
    }
};

class myStack{
    public:
    vector<int>s;

    void push(int val){
        s.push_back(val);
    }

    void pop(){
        s.pop_back();
    }

    bool isEmpty(){
        return s.size()==0;
    }

    int top(){
        return s.back();
    }
};

int main(){
    myStack s;
    myQueue q;
    int n, m;
    cin>>n>>m;
    for(int i=0; i<n; ++i){
        int x;
        cin>>x;
        s.push(x);
    }
    for(int i=0; i<m; ++i){
        int x;
        cin>>x;
        q.push(x);
    }
    if(n!=m){
        cout<<"NO"<<endl;
        return 0;
    }
    while(!s.isEmpty()){
        if(s.top()!=q.front()){
            cout<<"NO"<<endl;
            return 0;
        }
        s.pop();
        q.pop();
    }
    cout<<"YES"<<endl;
    return 0;
}