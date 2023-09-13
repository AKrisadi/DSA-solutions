// Problem Link - https://www.codingninjas.com/studio/problems/kth-smallest-node-in-bst_920441?leftPanelTab=0
void ino(TreeNode<int> *root, int &k,int &c)
{
   if(root==NULL)return;
   
   ino(root->left,k,c);
   k--;
   if(k==0){c=root->data;return;}
   ino(root->right,k,c);
}
int kthSmallest(TreeNode<int> *root, int k)
{
    int c=0;
    ino(root,k,c);
    return c;
}
