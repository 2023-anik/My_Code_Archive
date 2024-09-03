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

void insert_value(Node* &root, int x){
    if(root==NULL){
        root->val=x;
        return;
    }
    if(root->val > x)
        if(root->left==NULL)
            root->left = new Node(x);
        else
            insert_value(root->left, x);
    else
        if(root->right==NULL)
            root->right = new Node(x);
        else
            insert_value(root->right, x);
}

void levelOrderPrint(Node* root){
    queue<Node*>q;
    if(root) q.push(root);
    while(!q.empty()){
        Node* p = q.front();
        q.pop();

        cout<<p->val<<" ";

        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
    cout<<endl;
}

Node* input_tree(){
    int r; cin>>r;
    Node* root;
    queue<Node*>q;
    if(r!=-1){
        root = new Node(r);
        q.push(root);
    }
    while(!q.empty()){
        Node* p = q.front();
        q.pop();

        int x, y;
        cin>>x>>y;
        if(x!=-1) p->left = new Node(x);
        if(y!=-1) p->right = new Node(y);

        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
    return root;
}

int main(){
    Node* root = input_tree();
    levelOrderPrint(root);
    insert_value(root, 13);
    levelOrderPrint(root);
    insert_value(root, 32);
    levelOrderPrint(root);
    return 0;
}