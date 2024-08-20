/*
https://www.naukri.com/code360/problems/count-leaf-nodes_893055?leftPanelTabValue=PROBLEM
*/

/*
int noOfLeafNodes(BinaryTreeNode<int> *root){
    // Write your code here.
    if(!root) return 0;
    if(!root->left && !root->right) return 1;
    else{
        int l=noOfLeafNodes(root->left);
        int r=noOfLeafNodes(root->right);
        return l+r;
    }
}
*/