int heightOfBT(TreeNode<int> *&root , int &diameter) {
    // base case
    if (root == NULL) return 0 ;

    int left = heightOfBT(root->left, diameter) ;
    int right = heightOfBT(root->right, diameter) ;

    diameter = max (diameter , left+right) ;
    
    return 1 + max(left, right) ;
}

int diameterOfBinaryTree(TreeNode<int> *root){

    int diameter = 0 ;

	heightOfBT (root, diameter) ;

    return diameter ;
}
