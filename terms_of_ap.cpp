#include <bits/stdc++.h> 
#include <vector>

vector < int > termsOfAP(int x) {
    
    int i=1;
    int count=0;
    vector<int> v;
    while(count!=x){
        int term=3*i+2;
        if(term%4!=0){
            v.push_back(term);
            count++;
        }
        
        i++;
    }
    return v;
}
