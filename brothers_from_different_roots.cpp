class Solution
{
public:
    void inorder(Node* root, unordered_set<int>&st){
        if(!root) return;
        inorder(root->left, st);
        st.insert(root->data);
        inorder(root->right, st);
    }
    int countPairs(Node* root1, Node* root2, int x)
    {
        unordered_set<int> set1;
        inorder(root1, set1);
        unordered_set<int> set2;
        inorder(root2, set2);
        
        int count = 0;
    
        for(auto &i : set1){
            int need = x - i;
            if(set2.find(need) != set2.end()) 
                count++;
        }
        
        return count;
    }
};
