// Problem Link - https://www.codingninjas.com/studio/problems/reverse-level-order-traversal_764339?leftPanelTab=0
#include <bits/stdc++.h>
vector<int> reverseLevelOrder(TreeNode<int> *root){
    // Write your code here.
    vector<int> ans;
    if (root == nullptr) return ans;
    queue<TreeNode<int>*> q;
    q.push(root);

    while (!q.empty()){
        // int size = q.size();
        TreeNode<int> *temp = q.front();
        q.pop();
        // for (int i=0;i<size;i++){
            int val = temp-> val;
            ans.push_back(val);
            if (temp-> left) q.push(temp-> left);
            if (temp-> right) q.push(temp-> right);
        // }
    }
    reverse(ans.begin() , ans.end());
    return ans;
}
