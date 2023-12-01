bool solve(Node *root, int mini, int maxi) {
        if(!root)
            return false;
            
        if(!root->left and !root->right)
            return mini == maxi;
        
        return solve(root->left, mini, root->data - 1) or solve(root->right, root->data + 1, maxi);
    }
    bool isDeadEnd(Node *root)
    {
        //Your code here
                return solve(root, 1, 1e9);
    }
