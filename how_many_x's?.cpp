class Solution {
  public:
    int countX(int L, int R, int X) {
        // code here
        int ans=0;
        
        for(int i=L+1;i<R;i++){
            int temp=i;
            while(temp){
                int digit=temp%10;
                temp=temp/10;
                if(digit==X)
                ans++;
            }
        }
        return ans;
    }
};
