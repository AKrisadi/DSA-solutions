// Problem Link - https://www.codingninjas.com/studio/problems/left-view-of-binary-tree_625707?leftPanelTab=0
void getLeftView(BinaryTreeNode<int> *root,vector<int> &ans,int count){
    if (root == nullptr) return;
    if (ans.size() == count)
        ans.push_back(root->data);
    
    getLeftView(root->left, ans, count+1);
    getLeftView(root->right, ans, count+1);
}
vector<int> printLeftView(BinaryTreeNode<int> *root)
{
    //Write your code here
    vector<int> ans;
    if (root == nullptr) return ans;
    int count = 0;
    getLeftView(root,ans,count);
    return ans;
}
