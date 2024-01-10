int longSubarrWthSumDivByK(int arr[], int n, int k)
	{
	    // Complete the function
	    unordered_map<int,int> mp;  // it map the remender with there index;
        mp[0] = -1;
        int ans = 0;
        int sum = 0;
        for(int i = 0; i<n; i++){
            sum += arr[i];
            int rem = sum%k;
            if(rem<0){  // agar rem negative hogaya to plus k karo
                rem = rem+k;
            }
            if(mp.find(rem) != mp.end()){ // mil gaya map me 
                int val = mp[rem]; // prev kaha mila tha wo same remainder
                ans = max(ans,i-val); // ans me maximum value ka answer return karna ha
            }
            else{
                mp[rem] = i;
            }
        }
        return ans;
	}
