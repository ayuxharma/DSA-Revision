bool isBST(BinaryTreeNode<int> *root) {
    // Base case
    if (root == nullptr)
        return true;

    // Check if left subtree is BST
    if (root->left != nullptr && (root->left->data >= root->data || !isBST(root->left)))
        return false;

    // Check if right subtree is BST
    if (root->right != nullptr && (root->right->data <= root->data || !isBST(root->right)))
        return false;

    return true;
}