int heightOfBT(TreeNode<int>* &root , bool &ans){
    if (root == NULL) return 0 ;

    int left = heightOfBT(root->left, ans) ;
    int right = heightOfBT(root->right, ans) ;

    if (abs(left-right) > 1) ans = false ;

    return max(left+1 , right+1) ; 
}

bool isBalancedBT(TreeNode<int>* root){
    
    bool ans = true ;
    heightOfBT (root, ans) ;

    return ans ;
}