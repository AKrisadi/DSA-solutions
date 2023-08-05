// Problem Link - https://practice.geeksforgeeks.org/problems/height-of-binary-tree/1
int height(struct Node* node){
        // code here 
        if (node == nullptr) return 0;
        int lh = height(node-> left);
        int rh = height(node-> right);
        
        return max(lh,rh) + 1;
    }
