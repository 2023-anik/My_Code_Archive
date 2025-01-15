#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};

void levelOrder(Node* root, int x){
    queue<pair<Node*, int>>q;
    int level=0;
    if(root) q.push({root, 0});
    while(!q.empty()){
        Node* p=q.front().first;
        level=q.front().second;
        q.pop();

        if(level==x)
            cout<<p->val<<' ';
        if(level==x+1)return;

        if(p->left) q.push({p->left, level+1});
        if(p->right) q.push({p->right, level+1});
    }
    if(level<x)cout<<"Invalid"<<endl;
    return;
}

int main(){
    int r; cin>>r;
    Node* root;
    queue<Node*>q;
    if(r==-1)root=NULL;
    else{
        root = new Node(r);
        q.push(root);    
    }
        
    while(!q.empty()){
        Node* ff=q.front();
        q.pop();
    
        int x, y;
        cin>>x>>y;
        if(x!=-1)
            ff->left=new Node(x);
        if(y!=-1)
            ff->right=new Node(y);
    
        if(ff->left) q.push(ff->left);
        if(ff->right) q.push(ff->right);
    }
    int x; cin>>x;
    levelOrder(root, x);
    return 0;
}