// Problem Link - https://practice.geeksforgeeks.org/problems/check-for-balanced-tree/1
int height(Node *root)
{
    if(root==NULL)
        {
            return 0;
        }
        int l=height(root->left);
        int r=height(root->right);
        return max(l,r)+1;
}
class Solution{
    public:
    bool isBalanced(Node *root)
    {
        if(root==NULL)
        {
            return 1;
        }
        int lheight, rheight;
        lheight=height(root->left);
        rheight=height(root->right);
        if(abs(lheight-rheight)<=1 && isBalanced(root->left) && isBalanced(root->right))
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};
