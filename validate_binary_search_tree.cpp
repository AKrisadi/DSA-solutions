// Problem Link - https://leetcode.com/problems/validate-binary-search-tree/description/
bool isValidBST(TreeNode* root) {
        return check(root,LONG_MIN,LONG_MAX);
    }
    bool check(TreeNode* root, long mini, long maxi){
        if(root==NULL) return true;
        if(root->val<=mini || root->val>=maxi) return false;
        return (check(root->left,mini,root->val) && check(root->right,root->val,maxi));
    }
