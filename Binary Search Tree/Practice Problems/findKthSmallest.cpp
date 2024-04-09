
void solve(TreeNode<int> *&root, int k, int &count, int &ans) {

  // base case
  if (root == NULL || count >= k)
    return;

  solve(root->left, k, count, ans);

  count++;
  if (count == k) {
    ans = root->data;
    return;
  }

  solve(root->right, k, count, ans);
}


int kthSmallest(TreeNode<int> *root, int k) {
  int count = 0;
  int ans = -1;
  solve(root, k, count, ans);

  return ans;
}