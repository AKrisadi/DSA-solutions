#include <bits/stdc++.h> 
bool ninjaGram(string &str)
{
    // Write your code here
    int n = str.length();
    int arr[26] = {0};
    for (int i=0;i<n;i++){
        str[i] = tolower(str[i]);
    }
    for (int i=0;i<n;i++){
        arr[str[i] - 'a']++;
    }

    for (int i=0;i<26;i++){
        if (arr[i] == 0)
        return false;
    }

    return true;
}
