// Problem Link - https://www.codingninjas.com/studio/problem-of-the-day/easy?leftPanelTab=1
#include<bits/stdc++.h>
int binaryToInteger(int n, Node *head) {
    //    Write your code here
    vector<int> temp(n);
    while(head){
        temp.push_back(head-> data);
        head=head-> next;
    }


    int ans = 0;
    int counter = 0;
    int s = temp.size();

    for (int i=s-1;i>=0;i--){
        ans = ans + pow(2,counter)*temp[i];
        counter++;
    }

    return ans;

}
