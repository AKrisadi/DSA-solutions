// Problem Link - https://www.codingninjas.com/studio/problems/find-duplicate-in-array_1112602
#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
	int size = arr.size ();
	int ans = 0;
	sort (arr.begin (),arr.end());
	for (int i= 0; i < size - 1;i++){
		if (arr[i] == arr[i + 1]) return arr[i];
	}
	return -1;
}
