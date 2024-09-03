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
    Node* head = NULL;
    Node* tail = NULL;
    int sz=0;
    void push(int val){
        sz++;
        Node* newNode = new Node(val);
        if(head==NULL){
            head=newNode;
            tail=newNode;
            return;
        }
        newNode->prev=tail;
        tail->next=newNode;
        tail=newNode;
    }
    void pop(){
        sz--;
        Node* deleteNode=tail;
        tail=tail->prev;
        if(tail==NULL) head=NULL;
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
        //if, sz=0, then return true
        // if(sz==0)return true;
        // return false;
        return sz==0;
    }
};

int main(){
    myStack st;
    int n; cin>>n;
    for(int i=1; i<=n; ++i){
        int x; cin>>x;
        st.push(x);
    }
    // cout<<st.size()<<endl;
    for(int i=1; i<=n; ++i){
        cout<<st.top()<<endl;
        st.pop();
    }
    // st.push(10);
    // st.push(20);
    // cout<<st.top()<<endl;
    // st.pop();
    // cout<<st.top()<<endl;
    // // st.pop();
    // // cout<<st.top()<<endl;
    // // st.pop();
    // if(!st.empty())cout<<st.top()<<endl;
    return 0;
}