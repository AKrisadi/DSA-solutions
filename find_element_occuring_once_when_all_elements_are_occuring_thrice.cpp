 int singleElement(int arr[] ,int N) {
        // code here
         unordered_map<int,int> mp;
        for(int i=0;i<N;i++) mp[arr[i]]++;
        for(auto i :mp) if(i.second==1) return i.first;
    }
};
