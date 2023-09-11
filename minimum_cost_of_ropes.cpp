long long minCost(long long arr[], long long n) {
        // Your code here
        priority_queue<long long, vector<long long>, greater<long long>> pq;
        for(long long i=0;i<n;i++){
            pq.push(arr[i]);
        }
        long long ans=0;
        for(long long i=0;i<n-1;i++){
            long long a=pq.top();
            pq.pop();
            long long b=pq.top();
            pq.pop();
            ans=ans+a+b;
            pq.push(a+b);
        }
            return ans;
    }
