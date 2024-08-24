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

// vector<int>leftNodes, rightNodes;

void leftBoundary(Node* root){
    if(root->left){
        leftBoundary(root->left);
        // leftNodes.push_back(root->left->val);
        cout<<root->left->val<<' ';
    }else if(root->right){
        leftBoundary(root->right);
        // leftNodes.push_back(root->right->val);
        cout<<root->right->val<<' ';
    }
}

void rightBoundary(Node* root){
    if(root->right){
        cout<<root->right->val<<' ';
        rightBoundary(root->right);
    }else if(root->left){
        cout<<root->left->val<<' ';
        rightBoundary(root->left);
    }
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
    // leftBoundary(root);
    // // for(int x:leftNodes) cout<<x<<' ';
    // cout<<endl;
    // rightBoundary(root);
    if(root->left && !root->right){
        leftBoundary(root);
        cout<<root->val;
    }
    else if(!root->left && root->right){
        cout<<root->val<<' ';
        rightBoundary(root);
    }
    else {
        leftBoundary(root);
        cout<<root->val<<' ';
        rightBoundary(root);
    }
    cout<<endl;
    return 0;
}