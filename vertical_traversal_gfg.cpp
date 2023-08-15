// Problem Link - https://practice.geeksforgeeks.org/problems/print-a-binary-tree-in-vertical-order/1
vector<int> verticalOrder(Node *root)
    {
        //Your code here
        vector<int> ans;
        if (!root) return ans;
        
        map<int,vector<int>> mp;
        queue<pair<Node*,int>> q;
        q.push({root,0});
        
        while(!q.empty()){
            auto it = q.front();q.pop();
            Node* temp = it.first;
            int ind = it.second;
            
            mp[ind].push_back(temp-> data);
            if (temp-> left) q.push({temp->left,ind-1});
            if (temp-> right) q.push({temp-> right,ind+1});
        }
        
        for (auto it:mp){
            for (int y:it.second)
                ans.push_back(y);
        }
        
        return ans;
    }
