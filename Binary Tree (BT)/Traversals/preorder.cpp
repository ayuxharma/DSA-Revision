void solve (TreeNode<int> * root , vector <int>& ans) {

    // base case
    if (root == NULL){
        return ;
    }

    ans.push_back(root->data) ;
    solve(root->left, ans) ;
    solve(root->right, ans) ;
}

vector<int> preOrder(TreeNode<int> * root){
    
    // Preorder is NLR
    vector <int> ans ;
    
    solve(root, ans) ;
    return ans ;
}