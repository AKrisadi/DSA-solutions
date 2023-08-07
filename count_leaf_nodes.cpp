// Problem Link - https://www.codingninjas.com/studio/problems/count-leaf-nodes_893055?leftPanelTab=0
void getLeafNodes(BinaryTreeNode<int> *root,int &count){
    if (root == nullptr) return ;
    getLeafNodes(root->left, count);
    if (root-> left == nullptr && root-> right == nullptr) count++;
    getLeafNodes(root->right, count);
}
int noOfLeafNodes(BinaryTreeNode<int> *root){
    // Write your code here.
    int ans = 0;
    getLeafNodes(root,ans);
    return ans;
}
