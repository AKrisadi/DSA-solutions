void dfs(vector<int> g[], vector<bool>&vis, int src){
        vis[src]=true;
        for(auto node : g[src]){
            if(!vis[node]){
                cnt++;
                dfs(g,vis,node);
            }
        }
    }
    int isTree(int n, int m, vector<vector<int>> &adj) {
        // code here
        if(m!=n-1)return false;
         
        vector<int> g[n];
        for(auto e: adj){
            g[e[0]].push_back(e[1]);
            g[e[1]].push_back(e[0]);
        }
        cnt=1;
        vector<bool> vis(n,false);
        dfs(g, vis, 0);
        return n==cnt?1:0;
    }
