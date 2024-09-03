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

Node* convertBST(int arr[], int l, int r){
    
    if(l > r) return NULL;

    int mid=(l+r)/2;
    Node* root = new Node(arr[mid]);
    Node* leftSubTree = convertBST(arr, l, mid-1);
    Node* rightSubTree = convertBST(arr, mid+1, r);
    root->left = leftSubTree;
    root->right = rightSubTree;
    return root;
}

int main(){
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    Node* root = convertBST(arr, 0, n-1);
    levelOrder(root);
    return 0;
}