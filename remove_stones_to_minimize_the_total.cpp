int minStoneSum(vector<int>& piles, int k) {

        // as we need to return the min sum so we r creating max heap to perfrm top/2 operation on max elements

        priority_queue<int> pq;
        for (int i=0;i<piles.size();i++){
            pq.push(piles[i]);
        }

        // now performing the operation of reduction on top elements k times

        for (int i=0;i<k;i++){
            double top = pq.top();
            pq.pop();
            top = top - floor(top/2);
            pq.push(top);
        }

        // now calculating the sum of remaining elements
        int sum = 0;
        while (!pq.empty()){
            sum += pq.top();
            pq.pop();
        }

        return sum;
    }
