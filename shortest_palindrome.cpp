#include <bits/stdc++.h> 

int countDistinct(int a[]){

    int distinct=0;

    for(int i=0;i<26;i++){

        if(a[i]>0)

            distinct++;

    }

    return distinct;

}

int getLengthofLongestSubstring(string s, int k) {

    int freq[26] = {0}, st = 0, longestLength = 0;

    for(int i=0;i<s.length();i++){

        freq[s[i]-'a']++;

        while(countDistinct(freq)>k){

            freq[s[st]-'a']--;

            st++;

        }

        longestLength=max(longestLength,i-st+1);

    }

    return longestLength;

 

}
