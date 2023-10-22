vector<int> MinimumCoins(int n)

{

    vector<int>dp={1,2,5,10,20,50,100,500,1000},ans;

    while(n>0){

        int d=upper_bound(dp.begin(),dp.end(),n)-dp.begin();

        if(d!=11){

            int c=n/dp[d-1];

            n%=dp[d-1];

            while(c--) ans.push_back(dp[d-1]);

        }

        else{

            d=n;

            int c=n/dp[d-1];

            n%=dp[d-1];

            while(c--) ans.push_back(dp[d-1]);

        }

    }

    return ans;

}
