#include <bits/stdc++.h> 
void getSubsequences(string str,int i,int n,string temp,vector<string>& ans){
	if (i >= n){
		if (temp.length() > 0)
		ans.push_back(temp);
		return;
	}

	// not pick
	getSubsequences(str,i+1,n,temp,ans);

	// pick
	char ch = str[i];
	temp.push_back(ch);
	getSubsequences(str,i+1,n,temp,ans);
}
vector<string> subsequences(string str){
	
	// Write your code here
	string temp = "";
	vector<string> ans;

	getSubsequences (str,0,str.length(),temp,ans);

	return ans;
}
