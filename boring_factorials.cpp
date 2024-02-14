#include <bits/stdc++.h> 
int boringFactorials(int n, int p)
{
	// Write your code here.
	int fact = 1;

     int mod = 1e9+7;

    for( int i =2;i<=n;i++){

        fact = (fact*i)%mod;

        fact =fact%p;

    }

     int ans = (fact%p);

    return ans%mod;
}
