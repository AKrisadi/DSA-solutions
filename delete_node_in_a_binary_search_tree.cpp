BinaryTreeNode<int>* getMin(BinaryTreeNode<int>* root){
    while (root->left != nullptr) root = root-> left;
    return root;
}
BinaryTreeNode<int>* deleteNode(BinaryTreeNode<int>* root, int key) {
    // Write your code here.
    if (root == nullptr) return root;
    if (root-> data < key) root->right =  deleteNode(root->right,key);
    else if (root-> data > key) root->left = deleteNode(root->left, key);

    else {
         if (root->left == nullptr && root->right == nullptr) return nullptr;
         if (root-> right == nullptr){
            BinaryTreeNode<int>* temp = root->left;
            delete root;
            return temp;
        }
        else if (root-> left == nullptr){
            BinaryTreeNode<int>* temp = root->right;
            delete root;
            return temp;
        }
    
            BinaryTreeNode<int>* min = getMin(root-> right);
            root->data = min-> data;
            root->right = deleteNode(root->right, min->data);
        
    }

    return root;
}
