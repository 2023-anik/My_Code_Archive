/*
https://www.naukri.com/code360/problems/name_2035933?leftPanelTabValue=PROBLEMz
*/
/*
vector<int>v;

void postOrder(TreeNode* root){
    if(root==NULL) return;
    postOrder(root->left);
    postOrder(root->right);
    v.push_back(root->data);
}

vector<int> postorderTraversal(TreeNode *root)
{
    // Write your code here.
    postOrder(root);
    return v;
}
*/


/*
vector<int> postorderTraversal(TreeNode *root) {
    vector<int> v;
    if (root == NULL) return v;
    vector<int> left = postorderTraversal(root->left);
    vector<int> right = postorderTraversal(root->right);
    v.insert(v.end(), left.begin(), left.end());
    v.insert(v.end(), right.begin(), right.end());
    v.push_back(root->data);
    return v;
}
*/