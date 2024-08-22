/*
https://www.naukri.com/code360/problems/left-sum_920380?leftPanelTabValue=PROBLEM 
*/


long long leftSum(BinaryTreeNode<int> *root)
{
	// Write your code here.
	long long sum=0;
	if(!root)return 0;
	if(root->left)
		sum+=root->left->data;
	
	sum+=leftSum(root->left);
	sum+=leftSum(root->right);
	return sum;
}
