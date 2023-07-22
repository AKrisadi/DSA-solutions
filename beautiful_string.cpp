// Problem Link - https://www.codingninjas.com/studio/problems/beautiful-string_1115625
string generate (string str,int n,bool first){
	string ans = "";
	if (n == 0) return ans;
	if (first == true){
		ans += '1';
		n--;
	}
	else {
		ans += '0';
		n--;
	}
	while (n != 0) {
		char temp;
		if (ans[ans.size() - 1] == '0') temp = '1';
		else temp = '0';
		ans += temp;
		n--;
	}
	return ans;
}
int compare (string str, int n, string ans){
	int count = 0;
	for (int i=0;i<n;i++){
		if (str[i] != ans[i]) count++;
	}
	return count;
}
int makeBeautiful(string str) {
	// Write your code here
	// generate karlo given length ki beautiful strings
	// compare krlo dono ko given str se 
	// return krdo minimum of both the comapred differences
	int n = str.length();
	string s1 = generate(str, n , 0);
	int diff1 = compare(str, n , s1);

	string s2 = generate (str,n,1);
	int diff2 = compare (str,n,s2);

	return min(diff1,diff2);
}
