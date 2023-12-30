vector<string> winner(string arr[],int n)
    {
        // Your code here
        // Return the string containing the name and an integer
        // representing the number of votes the winning candidate got
        vector<string> ans;
        unordered_map<string,int> mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        int count=INT_MIN;
        string a="";
        for(auto x: mp){
            if(x.second>count){
                count=x.second;
                a=x.first;
            }
            else if(x.second==count){
                if(x.first<a){
                    a=x.first;
                }
            }
        }
        ans.push_back(a);
        ans.push_back(to_string(count));
        return ans;
    }
