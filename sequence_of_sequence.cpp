int numberSequence(int m, int n){
        // code here
         if(m==0||n==1)return m;
        int ans = 0;
        for(int i = m;i>=1;i--){
            ans += numberSequence(i/2,n-1);
        }
        return ans;
    }
};
