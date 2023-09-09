void getSorted(Node* root,vector<int> &ans){
        if (root == nullptr) return ;
        getSorted(root->left,ans);
        ans.push_back(root->data);
        getSorted(root->right,ans);
    }
    public:
    int kthLargest(Node *root, int K)
    {
        //Your code here
        if (root == nullptr) return -1;
        vector<int> ans;
        getSorted(root,ans);
        int n = ans.size();
        return ans[n-K];
    }
