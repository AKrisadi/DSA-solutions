// Problem Link - https://www.codingninjas.com/studio/problems/h_920474?leftPanelTab=0
void getValues(TreeNode *root,vector<int> &ans){
    if (root == nullptr) return;
    getValues(root->left,ans);
    ans.push_back(root->data);
    getValues(root->right,ans);
}
vector<int> mergeBST(TreeNode *root1, TreeNode *root2)
{
    // Write your code here.
    vector<int> first;
    getValues(root1,first);
    vector<int> second;
    getValues(root2, second);

    vector<int> finalAns;
    for(auto x:first) finalAns.push_back(x);
    for(auto x:second) finalAns.push_back(x);
    sort(finalAns.begin(),finalAns.end());
    return finalAns;
}
