// Problem Link - https://leetcode.com/problems/diameter-of-binary-tree/description/
int height(TreeNode* root,int &dia){
        if (!root) return 0;
        int lh = height(root-> left,dia);
        int rh = height(root-> right,dia);
        dia = max(lh+rh,dia);
        return max(lh,rh) + 1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int dia = 0;
        height(root,dia);
        return dia;

    }
