/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* getMin(TreeNode* root){
        while (root->left){
            root=root->left;
        }
        return root;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if (!root) return root;
        else if (key > root-> val) root-> right = deleteNode(root-> right,key);
        else if (key < root-> val) root-> left = deleteNode(root-> left,key);
        else {
            // Found the node to be deleted
            // case 1 - no children 
            if (!root-> left && !root->right){
                return nullptr;
            }
            // case 2 - single child
            else if (!root-> left){
                return root-> right;
            }
            else if (!root-> right){
                return root-> left;
            }
            // case 3 - single child
            else {
                TreeNode* rMin = getMin(root->right);
                root-> val = rMin->val;
                root->right = deleteNode(root->right,rMin->val);
                return root;
            }
        }
        return root;
    }
};
