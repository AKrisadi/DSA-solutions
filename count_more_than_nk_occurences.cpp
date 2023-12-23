int countOccurence(int arr[], int n, int k) {
        // Your code here
        int count =0;
        unordered_map<int,int> mpp;
        for(int i =0;i< n;i++){
            mpp[arr[i]]++;
        }
        for(auto it= mpp.begin();it!= mpp.end();it++){
            if(it->second > n/k) count++;
        }
        return count;
    }
