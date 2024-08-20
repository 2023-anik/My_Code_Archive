/*
https://www.naukri.com/code360/problems/inorder-traversal_3839605?leftPanelTabValue=PROBLEM
*/

/*
vector<int> getInOrderTraversal(TreeNode *root)
{
    // Write your code here.
    vector<int>v;
    if(!root)return v;
    vector<int>left=getInOrderTraversal(root->left);
    vector<int>right=getInOrderTraversal(root->right);
    v.insert(v.end(), left.begin(), left.end());
    v.push_back(root->data);
    v.insert(v.end(), right.begin(), right.end());
    return v;
}*/