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

void levelOrder(Node* root){
    queue<Node*>q;
    if(root) q.push(root);//***
    while(!q.empty()){
        //ber kora
        Node* firstNode=q.front(); 
        q.pop();

        //jabotio kaj kora
        cout<<firstNode->val<<" ";

        //children gulake rakha
        if(firstNode->left) q.push(firstNode->left);
        if(firstNode->right) q.push(firstNode->right);
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

    levelOrder(root);
    return 0;
}