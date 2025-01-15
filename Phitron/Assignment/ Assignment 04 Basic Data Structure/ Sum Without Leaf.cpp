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

int mc=0;

void sum(Node* root){
    if(!root) return;
    if(root->left || root->right)
        mc+=root->val;
    // return sum(root->left)+sum(root->right)+root->val;
    sum(root->left);
    sum(root->right);
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
    sum(root);
    cout<<mc<<endl;
    return 0;
}