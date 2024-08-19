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
    q.push(root);
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
    Node* root=new Node(10);
    Node* a=new Node(20);
    Node* b=new Node(30);
    Node* c=new Node(40);
    Node* d=new Node(50);
    Node* e=new Node(60);
    Node* f=new Node(70);
    Node* g=new Node(80);
    Node* h=new Node(90);
    Node* i=new Node(100);

    //connection
    root->left=a;
    root->right=b;
    a->left=c;
    a->right=h;
    b->right=d;
    c->right=e;
    d->left=f;
    d->right=g;
    h->right=i;

    levelOrder(root);
    return 0;
}