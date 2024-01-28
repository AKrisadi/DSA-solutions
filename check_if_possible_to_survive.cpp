#include <bits/stdc++.h> 
bool isPossibleToSurvive(int n, int x, int d){
    // Write your code here
    if ((n-x)*6>=x) return true;
     if (d<=6) return n>=x;
     return false;
}
