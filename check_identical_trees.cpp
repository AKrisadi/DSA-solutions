// Problem Link - https://www.codingninjas.com/studio/problems/identical-trees_799364?leftPanelTab=0
bool identicalTrees(BinaryTreeNode<int>* root1, BinaryTreeNode<int>* root2) {
    // Write your code here. 	 
    if (root1 == NULL && root2 == NULL)
        return true;
    if (root1 != NULL && root2 == NULL)
        return false;
    if (root1 == NULL && root2 != NULL)
        return false;
    
    bool lSide = identicalTrees(root1->left, root2->left);
    bool rSide = identicalTrees(root1->right, root2->right);
    bool val = root1-> data == root2-> data;

    if (lSide && rSide && val)
        return true;
    else return false;
}
