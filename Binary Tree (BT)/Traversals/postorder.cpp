void f(TreeNode *root, vector<int> &ans) {
    if(!root) return;
    f(root->left, ans);
    f(root->right, ans);
    ans.push_back(root->data);
}
vector<int> postorderTraversal(TreeNode *root) {
    vector<int> ans;
    f(root, ans);
    return ans;
}