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

int maxHight(Node* root){
    if(root==NULL) return 0;
    return max(maxHight(root->left), maxHight(root->right))+1;
}


int main(){
    int cnt=0;
    int r; cin>>r;
    Node* root;
    queue<Node*>q;
    if(r==-1)root=NULL;
    else{
        cnt++;
        root = new Node(r);
        q.push(root);    
    }
        
    while(!q.empty()){
        Node* ff=q.front();
        q.pop();
    
        int x, y;
        cin>>x>>y;
        if(x!=-1){
            cnt++;
            ff->left=new Node(x);
        }
        if(y!=-1){
            cnt++;
            ff->right=new Node(y);
        }
        if(ff->left) q.push(ff->left);
        if(ff->right) q.push(ff->right);
    }

    // numberOfNodes(root);
    cout<<((pow(2,maxHight(root))-1==cnt)?"YES":"NO")<<endl;
    return 0;
}