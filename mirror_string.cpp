#include <bits/stdc++.h> 
bool isReflectionEqual(string &s)
{
	// Write your code here.
	int n = s.length();
	for (int i=0;i<n;i++){
		if (s[i]=='B' || s[i]=='C' || s[i] == 'D' || s[i] == 'E' || s[i] == 'F' || s[i] == 'G' || s[i] == 'J' ||
		    s[i]=='K' || s[i]=='L' || s[i] == 'N' || s[i] == 'P' || s[i] == 'Q' || s[i] == 'R' || s[i] == 'S' ||
			s[i]=='Z') return false;
	}
	int left = 0;
	int right = n-1;
	while (left < right){
		if (s[left] != s[right])
		return false;
		left++;
		right--;
	}
	return true;
}
