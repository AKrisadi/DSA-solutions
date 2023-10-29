// Problem Link - https://www.codingninjas.com/studio/problems/remove-node-in-bst_920452
TreeNode<int> * getMin(TreeNode<int> * root){
    while (root-> left != nullptr)  root = root-> left;
    return root;
}
TreeNode<int> * removeNode(TreeNode<int> *root, int X)
{
    // Write your code here.
    TreeNode<int> * temp;
    if (root == nullptr) return root;
    if (root-> val < X) root-> right = removeNode(root->right, X);
    else if (root-> val > X) root-> left = removeNode(root->left, X);
    else {
        if (root->left == nullptr && root->right == nullptr) return nullptr;
        else if (root-> left == nullptr) return root-> right;
        else if (root-> right == nullptr) return root-> left;
        else {
            TreeNode<int> * min = getMin (root-> right);
            root-> val = min-> val;
            root->right = removeNode(root->right, min->val);
            return root;
        }
    }
    return root;
}
