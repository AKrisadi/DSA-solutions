#include <bits/stdc++.h>
bool isPalindrome (string s) {
    int i = 0 , j = s.length () - 1;
    while (i < j) {
        if (s[i] != s[j]) return false;
        else {
            i++;
            j--;
        }
    }
    return true;
}
char toSameCase(char a) {
    if ((a >= 'a' && a <= 'z') || (a >= '0' && a <= '9')) return a;
    else {
        char temp;
        temp = a - 'A' + 'a';
        return temp;
    }
}
bool isValid (char a) {
    if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z') || (a >= '0' && a <= '9')) {
        return true;
    }
    else return false;
}
bool checkPalindrome(string s)
{
    // Write your code here.
    // create a temp string with only alphanumeric characteres
    // change all cases to small
    // check for palindrome
    string temp = "";
    for (int i = 0 ; i < s.length() ;i++) {
        if (isValid(s[i])) {
            temp.push_back (s[i]);
        }
    }
    for (int i = 0 ; i < temp.length();i++) {
        temp[i] = toSameCase(temp[i]);
    }
    return isPalindrome(temp);
}
