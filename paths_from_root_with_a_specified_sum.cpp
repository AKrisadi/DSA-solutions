void printPathsUtil(Node* curr_node, int sum, int sum_so_far , vector<vector<int>> &final_path,
    vector<int>&path
    ){
        
        if(curr_node == NULL) return;
        
        sum_so_far +=curr_node->key;
        
        path.push_back(curr_node->key);
        
        if(sum_so_far == sum){
            
            final_path.push_back(path);
        }
        
        if(curr_node->left!=NULL){
            printPathsUtil(curr_node->left,sum,sum_so_far,final_path,path);
        }
        if(curr_node->right!=NULL){
            printPathsUtil(curr_node->right,sum,sum_so_far,final_path,path);
        }
        path.pop_back();
    }
    vector<vector<int>> printPaths(Node *root, int sum)
    {
        //code here
        
        vector<vector<int>>final_path;
        int sum_so_far = 0;
        vector<int>path;
        printPathsUtil(root,sum,sum_so_far,final_path,path);
        
        return final_path;
        
    }
