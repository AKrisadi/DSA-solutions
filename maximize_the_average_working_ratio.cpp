#include <bits/stdc++.h> 
double maxAverageWorkingRatio(vector<vector<int>>& bulbs, int n, int extra) {
    // Write your code here   
        double avg  = 0,ans = 0;
        priority_queue<pair<double,int>> pq;
        for(int i = 0;i<n;i++)
        {
            double diff =(double)(bulbs[i][0]+1)/(double)(bulbs[i][1]+1)-(double)bulbs[i][0]/(double)bulbs[i][1];
            pq.push({diff,i});
        }
        while(extra--)
        {
           int i = pq.top().second;
           pq.pop();
           bulbs[i][0]+=1;
           bulbs[i][1]+=1;
           double diff = (double)(bulbs[i][0]+1)/(double)(bulbs[i][1]+1)-(double)bulbs[i][0]/(double)bulbs[i][1];
           pq.push({diff,i});
        }

        for (int i = 0; i < n; i++) {
           avg = (double)bulbs[i][0] / (double)bulbs[i][1];
           ans += avg;
        }
        return ans / (double)n;
}
