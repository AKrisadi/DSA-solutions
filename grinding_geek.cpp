 int solve(int i,int total , vector<int>&cost ,int &n,vector<vector<int>>&dp){
        if(i>=n)
           return 0;
        int p=0,np=0;
        if(dp[total][i]!=-1){
            return dp[total][i];
        }
        np=solve(i+1,total,cost,n,dp);
        if(total>=cost[i]){
            int c=total-cost[i];
            int t=floor(0.9*(float)cost[i]);
            c+=t;
            p=1+solve(i+1,c,cost,n,dp);
        }
        return dp[total][i]=max(p,np);
    }
    int max_courses(int n, int total, vector<int> &cost)
    {
        //Code Here
         vector<vector<int>>dp(total+1,vector<int>(n+1,-1));
        return solve(0,total,cost,n,dp);
    }
