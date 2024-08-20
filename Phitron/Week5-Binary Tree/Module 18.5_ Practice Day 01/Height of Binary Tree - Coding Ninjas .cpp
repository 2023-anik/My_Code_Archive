/*
https://www.naukri.com/code360/problems/tree-height_4609628?leftPanelTabValue=PROBLEM
*/

/*
int heightOfBinaryTree(TreeNode<int> *root)
{
	// Write your code here.
    if(!root) return 0;
    return max(heightOfBinaryTree(root->left), heightOfBinaryTree(root->right))+1;
}
*/