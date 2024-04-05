void solve (TreeNode * root , vector <int>& ans) {

    // base case
    if (root == NULL){
        return ;
    }

    // LNR
    solve(root->left, ans) ;
    ans.push_back(root->data) ;
    solve(root->right, ans) ;
}


vector<int> getInOrderTraversal(TreeNode *root)
{
    // Inorder is LNR
    vector <int> ans ;
    
    solve(root, ans) ;
    return ans ;
}