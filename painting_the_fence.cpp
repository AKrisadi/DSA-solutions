long long countWays(int n, int k){
        // code here
        vector<long long>dp(n+ 1, 0);
        long long mod= 1000000007;
        dp[0]= 0;
        dp[1]= k%mod;
        dp[2]= ((k%mod)*(k%mod))%mod;
        for(long long i=3; i<=n; i++){
            dp[i]= (((dp[i- 1]+ dp[i- 2])%mod)*(k- 1)%mod)%mod;
        }
        return dp[n];
    }
