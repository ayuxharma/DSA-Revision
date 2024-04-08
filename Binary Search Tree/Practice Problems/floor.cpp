int Floor(BinaryTreeNode<int> *root, int x)

{

    int lower = -1;

    while (root != NULL)
    {

        if (root->data == x)
        {

            lower = root->data;

            return lower;
        }

        if (root->data < x)
        {

            lower = root->data;

            root = root->right;
        }

        else
        {

            root = root->left;
        }
    }

    return lower;
}