bool canPair(vector<int> nums, int k) {
        // Code here.
        int n= nums.size();
        unordered_map<int,int>mp;


        for(int i=0;i<n;i++)
        {
           if(nums[i]%k==0)
           {
               continue;
           }
           mp[nums[i]%k]++;
        }
        


        for(int i=1;i<((k+1)/2);i++)
        {
            
            if(mp[i]== mp[k-i])
            {
                mp[i]=0;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
