vector<int> antiDiagonalPattern(vector<vector<int>> matrix) 
    {
        // Code here
         int n = matrix.size();
        vector<vector<bool>> vis(n, vector<bool>(n, false));
        queue<pair<int, int>> q;
        vector<int> ans;
        q.push({0, 0});
        vis[0][0] = true;
        while(!q.empty()){
            auto itr = q.front();
            int row = itr.first;
            int col = itr.second;
            q.pop();
            ans.push_back(matrix[row][col]);
            int drow[] = {0, 1};
            int dcol[] = {1, 0};
            for(int i=0; i<2; i++){
                int new_row = row+drow[i];
                int new_col = col+dcol[i];
                if(new_row>=0 && new_row<n && new_col>=0 && new_col<n && !vis[new_row][new_col]){
                    q.push({new_row, new_col});
                    vis[new_row][new_col] = true;
                }
            }
        }
        return ans;
    }
