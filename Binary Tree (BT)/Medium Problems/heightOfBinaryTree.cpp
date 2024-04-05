int heightOfBinaryTree(TreeNode<int> *root)
{
	// base case
    if (root == NULL) return 0 ;

    int left = heightOfBinaryTree(root->left) ;
    int right = heightOfBinaryTree(root->right) ;

    int ans = 1 + max(left, right) ;

    return ans ; 
}