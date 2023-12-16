long long int countStr(long long int n){
    //complete the function here
    long long ans = 0;
   
   ans = 1 + (n*(n-1)*(n-2)/2) + n + n*(n-1) + n + n*(n-1)/2;
   
   return ans;
}
