// Problem Link - https://www.codingninjas.com/studio/guided-paths/basics-of-c/content/118784/offering/1381081
#include <bits/stdc++.h> 
vector<int> dp(1e5 + 1, -1);
int fibonacciNumber(int n){
    // Write your code here.
    if (n <= 2) return 1;
    if (dp[n] != -1) return dp[n];
    return dp[n] = (fibonacciNumber(n - 1) + fibonacciNumber(n - 2)) % 1000000007;
}
