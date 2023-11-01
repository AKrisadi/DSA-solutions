// Problem Link - https://www.codingninjas.com/studio/problems/alternatives_893342?leftPanelTabValue=PROBLEM
#include <bits/stdc++.h> 

void posAndNeg(vector<int> &arr)
{
    // Write your code here.
     vector<int>pos;

    vector<int>neg;

    for(auto x: arr){

        if(x>=0){

            pos.push_back(x);

        }

        else{

            neg.push_back(x);

        }

    }

    int n=arr.size()/2;

    arr.clear();

    for(int i=0; i<n; i++){

        arr.push_back(pos[i]);

        arr.push_back(neg[i]);

    }
}
