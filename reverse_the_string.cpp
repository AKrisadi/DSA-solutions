// Problem Link - https://www.codingninjas.com/studio/problems/reverse-the-string_799927
#include <bits/stdc++.h> 
string reverseString(string str)
{
	// Write your code here.
	int i = 0;
	int j = str.length () - 1;
	while ( i < j) {
		swap (str[i++],str[j--]);
	}
	return str;
}
