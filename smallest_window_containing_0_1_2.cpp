int smallestSubstring(string s) {
        // Code here
         int ans=INT_MAX;
        int zero=0, one=0, two=0;
        int i=0, j=0;
        int n=s.length();
        while(i<n){
            switch(s[i]-48){
                case 0: zero++; break;
                case 1: one++; break;
                case 2: two++; break;
            }
            while(zero && one && two){
                ans=min(ans, i-j+1);
                switch(s[j]-48){
                    case 0: zero--; break;
                    case 1: one--; break;
                    case 2: two--; break;
                }
                j++;
            }
            i++;
        }
        return ans==INT_MAX?-1: ans;
    }
