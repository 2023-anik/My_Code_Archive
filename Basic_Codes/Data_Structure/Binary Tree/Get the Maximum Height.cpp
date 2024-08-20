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

//to print the BT
int maxHight(Node* root){
    if(root==NULL) return 0;

    // int l=maxHight(root->left);
    // int r=maxHight(root->right);
    // return max(l,r)+1;
    return max(maxHight(root->left), maxHight(root->right))+1;
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

    cout<<"Maximum Hight of BT: "<<maxHight(root)<<endl;
    return 0;
}