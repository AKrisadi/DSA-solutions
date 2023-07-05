//Problem Link - https://www.codingninjas.com/studio/problems/find-msb-in-o-1_1112570?leftPanelTab=0
#include <bits/stdc++.h> 
int findMSB(int n){
	// Write your code here
	int ans = 1;
	while (ans < n){
		ans = ans * 2;
	}
	if (ans>n) return ans/2;
	return ans;
}
