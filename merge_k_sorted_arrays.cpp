#include <bits/stdc++.h> 
vector<int> merge2SortedArrays(vector<int> a,vector<int> b){
    int n = a.size();
    int m = b.size();

    vector<int> ans;
    int i=0,j=0;
    while(i<n && j < m){
        if (a[i] < b[j])
            ans.push_back(a[i++]);
        
        else 
            ans.push_back(b[j++]);
    }

    while (i < n){
        ans.push_back(a[i++]);
    }

    while (j<m){
        ans.push_back(b[j++]);
    }

    return ans;
}
/*vector<int> solve(vector<vector<int>> kArrays,int start,int end,int k){
    if (start == end){
        return kArrays[start];
    }
    if (end - start == 1){
        return merge2SortedArrays(kArrays[start],kArrays[end]);
    }

    if(end-start>1){
        vector<int> left = solve(kArrays,start,(start + end) / 2,k);
        vector<int> right = solve(kArrays,((start + end) / 2) +1,end,k);
        return merge2SortedArrays(left,right);
    }
}*/
vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays, int k)
{
    if(k == 1) return kArrays[0];

    vector <int> a = kArrays[0];
    vector <int> b = kArrays[1];

    // First merge 2 sorted arrays and just repeatedly solve it

    vector <int> res = merge2SortedArrays(a,b);

    for(int i=2 ; i<k ; i++){

        res = merge2SortedArrays(res,kArrays[i]);

    }

    return res;
}
