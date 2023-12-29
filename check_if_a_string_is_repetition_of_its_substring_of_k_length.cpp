int kSubstrConcat (int n, string s, int k)
	{
	    // Your Code Here
	     if(n%k!=0) return false;
        unordered_map<string,int>mp;
        for(int i=0;i<n;i+=k){
            string d=s.substr(i,k);
            mp[d]++;
        }
        if(mp.size()<2) return true;
        for(auto i:mp) if(i.second==1 and mp.size()==2) return true;
        return false;
	}
