class Solution
{
    private:
        int res;
        void dfs(Node* root){
            if(!root){
                return;
            }
            if(!root->left && !root->right){
                res+=root->data;
            }
            dfs(root->right);
            dfs(root->left);
        }
    public:
        /*You are required to complete below method */
        int sumOfLeafNodes(Node *root ){
             /*Your code here */
             this->res=0;
            dfs(root);
            return res;
        }
};
