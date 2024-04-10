bool identicalTrees(BinaryTreeNode<int> *root1, BinaryTreeNode<int> *root2) {

  if (root1 == NULL && root2 == NULL) return true;
  else if (root1 == NULL && root2 != NULL) return false;
  else if (root1 != NULL && root2 == NULL) return false;

  bool leftcheck = identicalTrees(root1->left, root2->left);
  bool rightcheck = identicalTrees(root1->right, root2->right);

  return (root1->data == root2->data) && leftcheck && rightcheck;
}