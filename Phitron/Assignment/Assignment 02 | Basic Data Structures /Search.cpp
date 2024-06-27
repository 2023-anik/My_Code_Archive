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

int search(Node* head, int value){
    int idx=-1;
    while(head!=NULL){
        idx++;
        if(head->val==value)
            return idx;
        head=head->next;
    }return -1;
}

void solve(){
    Node* head=NULL;
    Node* tail=NULL;
    int value;
    while(cin>>value){
        if(value==-1)break;
        insert(head, tail, value);
    }
    int x; cin>>x;
    cout<<search(head, x)<<endl;
}

int main(){
    int t; cin>>t;
    while(t--) solve();
    return 0;
}