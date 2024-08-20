/*
https://www.naukri.com/code360/problems/level-order-traversal_796002?leftPanelTabValue=PROBLEM
*/

/*
vector<int> getLevelOrder(BinaryTreeNode<int> *root)
{
    //  Write your code here.
    queue<BinaryTreeNode<int>*>q;
    vector<int>v;
    if(root){
        q.push(root);
    }
    while(!q.empty()){
        BinaryTreeNode<int>* f=q.front();
        q.pop();

        v.push_back(f->val);

        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }
    return v;
}
*/