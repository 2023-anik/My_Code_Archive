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

// void print_levelOrder(Node* root){
//     queue<Node*>q;
//     if(root)
//         q.push(root);
//     while(!q.empty()){
//         Node* p = q.front();
//         q.pop();

//         cout<<p->val<<" ";

//         if(p->left) q.push(p->left);
//         if(p->right) q.push(p->right);
//     }
// }

//to search
bool binarySearch(Node* root, int x){
    if(root==NULL) return false;
    if(root->val==x) return true;
    if(x<root->val)
        return binarySearch(root->left, x);
    else
        return binarySearch(root->right, x);
}

Node* input_tree(){
    int r; cin>>r;
    Node* root=NULL;
    queue<Node*>q;
    if(r!=-1){
        root=new Node(r);
        q.push(root);
    }
    while(!q.empty()){
        Node* p=q.front();
        q.pop();

        int l, r;
        cin>>l>>r;
        if(l!=-1) p->left=new Node(l);
        if(r!=-1) p->right=new Node(r);

        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
    return root;
}

int main(){
    Node* root=input_tree();
    // print_levelOrder(root);
    if(binarySearch(root, 15)) cout<<"Found"<<endl;
    else cout<<"Not found"<<endl;
    if(binarySearch(root, 100)) cout<<"Found"<<endl;
    else cout<<"Not found"<<endl;
    return 0;
}