#include <bits/stdc++.h> 
/************************************************************

    Following is the Binary Tree node structure
    
    template <typename T>
    class TreeNode {
        public :
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode() {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };

************************************************************/
void solve(TreeNode<int>*root,int lb,int ub,bool& flag){

    if(!root)return ;

    if(flag)return;

    if(!root->left && !root->right){

        if(lb==ub)flag=true;

    }

    solve(root->left,lb,root->data-1,flag);

    solve(root->right,root->data+1,ub,flag);

}
bool isDeadEnd(TreeNode<int>* root) {
    // Write your code here
    // Write your code here

    bool flag=false;

    solve(root,1,INT_MAX,flag);

    return flag;
}
