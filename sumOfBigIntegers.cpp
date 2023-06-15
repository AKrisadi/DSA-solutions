#include <bits/stdc++.h> 
string findSum(string num1 , string num2) {
	// Write Your Code here.
	if (num1.length() > num2.length())
		swap(num1,num2);

	string str = "";

	int n1 = num1.length(), n2 = num2.length();
	int diff = n2 - n1;

	int carry = 0;

	for (int i=n1-1;i>=0;i--){
		int sum = ((num1[i]-'0') + (num2[i+diff]-'0') + carry);
		str.push_back(sum%10+'0');
		carry = sum/10;
	}

	for (int i = n2-n1-1;i>=0;i--){
		int sum = ((num2[i]-'0') + carry);
		str.push_back(sum%10+'0');
		carry = sum / 10;
	}

	if (carry) str.push_back(carry+'0');

	reverse(str.begin(),str.end());

	return str;
}
