// Problem Link - https://www.codingninjas.com/studio/problems/find-msb-in-o-1_1112570?leftPanelTab=1
#include <bits/stdc++.h> 
int findMSB(int n){
	// Write your code here
	int x = (int)log2(n);

int ans = (int)pow(2,x);

return ans;
}
