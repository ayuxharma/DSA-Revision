TreeNode<int>* insertionInBST(TreeNode<int>* root, int val)
{
    TreeNode<int>* finalRoot = root ;
    // base calls
    if (root->left==NULL && val < root->val){
        TreeNode<int>* temp = new TreeNode(val) ;
        root->left = temp ;
    }
     if (root->right==NULL && val > root->val){
        TreeNode<int>* temp = new TreeNode(val) ;
        root->right = temp ;
    }

    // recursion call
    if (root->val < val){
        insertionInBST(root->right, val) ;
    }
    if (root->val > val) {
        insertionInBST(root->left, val) ;
    }

    return finalRoot ;

}