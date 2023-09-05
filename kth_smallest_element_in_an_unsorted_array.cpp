#include "bits/stdc++.h"
int kthSmallestElement(vector<int>& arr, int n, int k) {
    // smallest required so create max heap
    priority_queue<int> pq;

    // fill first k elements in pq
    for (int i=0;i<k;i++){
        pq.push(arr[i]);
    }

    // now for remaining elements check if any one is smaller then pop and push it in pq
    for (int i=k;i<n;i++){
        if (arr[i] < pq.top()){
            pq.pop();
            pq.push(arr[i]);
        }
    }

    return pq.top();
}
