// Problem Link - https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/description/
vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if (root == nullptr) return ans;
        bool leftToRight = true;
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()){
            int size = q.size();
            vector<int> row(size);
            for (int i=0;i<size;i++){
                TreeNode* temp = q.front();
                q.pop();
                if (temp-> left)
                    q.push(temp-> left);
                if (temp-> right)
                    q.push(temp-> right);
                int ind = (leftToRight) ? i : (size - i - 1);
                row[ind] = temp-> val;
            }
            leftToRight = !leftToRight;
            ans.push_back(row);
        }
        return ans;
    }
