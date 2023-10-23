#include <bits/stdc++.h> 
string getWinner(vector < string > & votes) {
    // Write your code here.
    int n = votes.size();
    unordered_map<string,int> map;
    for(int i=0;i<n;i++){
        map[votes[i]]++;
    }
    string ans = votes[0];
    int maximum =  INT_MIN;
    for(auto itr = map.begin();itr != map.end();itr++){
        if(itr->second > maximum){
            ans = itr->first;
            maximum = itr->second;
            continue;
        }
        if(itr->second == maximum && itr->first < ans){
           ans = itr->first;
            maximum = itr->second;
        }
    }
    return ans;
}
