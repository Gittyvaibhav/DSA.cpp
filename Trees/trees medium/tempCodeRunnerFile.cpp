if (root == nullptr)
    {
        return 0;
    }

    int leftSum = maxPath(root->left);
    int rightSum = maxPath(root->right);

    return root->data + max(leftSum, rightSum);
}