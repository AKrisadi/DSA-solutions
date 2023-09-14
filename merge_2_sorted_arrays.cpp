// Problem Link - https://practice.geeksforgeeks.org/problems/merge-k-sorted-arrays/1
vector<int> merge2Sorted(vector<int> arr1,vector<int> arr2){
        int n = arr1.size();
        int m = arr2.size();
        vector<int> ans;
        int i=0,j=0;
        while (i<n && j<m){
            if (arr1[i] < arr2[j]){
                ans.push_back(arr1[i]);
                i++;
            }
            else {
                ans.push_back(arr2[j]);
                j++;
            }
        }
        
        while (i < n){
            ans.push_back(arr1[i++]);
        }
        
        while (j < m){
            ans.push_back(arr2[j++]);
        }
        
        return ans;
    }
    vector<int> mergeKArrays(vector<vector<int>> arr, int K)
    {
        //code here
        if (K == 0) return {};
        if (K == 1) return arr[0];
        vector<int> ans;
        
        ans = merge2Sorted(arr[0],arr[1]);
        
        for (int i=2;i<K;i++){
            ans = merge2Sorted(ans,arr[i]);
        }
        
        return ans;
    }
