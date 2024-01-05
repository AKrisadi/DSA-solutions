#include <bits/stdc++.h> 
string doorStatus(int n) {
    vector<int>v(n,0);
    for(int i=1;i<=n;i++)
    {
        
         for (int j = i - 1; j < n; j += i) {
            v[j] = 1 - v[j];
        }
       
    }
    string s="";
    for(int i=0;i<v.size();i++)
    {
        s+=to_string(v[i]);
    }
    return s;

    // Write your code here.

}
