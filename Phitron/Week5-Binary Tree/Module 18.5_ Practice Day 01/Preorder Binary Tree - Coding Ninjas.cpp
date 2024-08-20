/*
https://www.naukri.com/code360/problems/preorder-binary-tree_5948?leftPanelTabValue=PROBLEM
*/

/*
vector<int> preOrder(TreeNode<int> * root){
    // Write your code here.
    vector<int>v;
    if(!root)return v;
    v.push_back(root->data);
    vector<int>left=preOrder(root->left);
    vector<int>right=preOrder(root->right);
    v.insert(v.end(), left.begin(), left.end());
    v.insert(v.end(), right.begin(), right.end());
    return v;
}
*/