vector<int> levelOrder(TreeNode<int> * root){
    queue<TreeNode<int>*>q;
    vector<int>ans;
    q.push(root);
    while(!q.empty()){
        root=q.front();
        if(root->left)q.push(root->left);
        if(root->right)q.push(root->right);
        q.pop();
        ans.push_back(root->data);
    }
    return ans;
}