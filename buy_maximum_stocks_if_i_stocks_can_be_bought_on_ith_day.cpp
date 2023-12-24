int buyMaximumProducts(int n, int k, int price[]){
        //Write your code here
        vector<pair<int,int>> tmp;
        int rem = k;
        int ans = 0;
        for(int i=0;i<n;i++){
            tmp.push_back({price[i],i+1});
        }
        sort(tmp.begin(),tmp.end());
        for(int i=0;i<n;i++){
            int cost = tmp[i].first;
            int stock = tmp[i].second;
            if(stock*cost < rem){
                ans += stock;
                rem -= (cost*stock);
            }
            else if(rem/cost){
                int num = rem/cost;
                ans += num;
                rem -= num*cost;
            }
        }
        return ans;
    }
