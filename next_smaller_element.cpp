// Problem Link - https://www.codingninjas.com/studio/problems/next-smaller-element_1112581
#include <bits/stdc++.h>
vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    // Write your code here.
    vector<int> ans(n,-1);

    stack<int> st;
    st.push(0);

    for (int i=1;i<n;i++){
        while (!st.empty() && arr[i] < arr[st.top()]){
            ans[st.top()] = arr[i];
            st.pop();
        }
        st.push(i);
    }

    return ans;
}
