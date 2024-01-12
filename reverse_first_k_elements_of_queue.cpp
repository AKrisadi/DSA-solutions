 queue<int> modifyQueue(queue<int> q, int k) {
        // add code here.
        queue<int> ans;
        vector<int> v;
        while(q.size()>=1){
            int s=q.front();
            q.pop();
            v.push_back(s);
        }
        reverse(v.begin(),v.begin()+k);
        for(int i=0;i<v.size();i++){
            ans.push(v[i]);
        }
        return ans;
    }
