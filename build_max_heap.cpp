#include <bits/stdc++.h> 
void insertInHeap(int val,vector<int> &ans,int n,int size){
	ans[size] = val;
	int childIndex = size;
	while (childIndex >= 0){
		int parentIndex = (childIndex - 1) / 2;
		if (ans[parentIndex] < ans[childIndex]){
			swap (ans[parentIndex], ans[childIndex]);
			childIndex = parentIndex;
		}
		else return ;
	}
	return;
}
vector<int> buildHeap(vector<int> arr, int n)
{	
	// Write your code here
	vector<int> ans(n);

	int size = 0;
	for (int i=0;i<n;i++){
		insertInHeap(arr[i],ans,n,size);
		size++;
	}
	return ans;
}
