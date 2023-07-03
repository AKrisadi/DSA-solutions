// Problem Link - https://practice.geeksforgeeks.org/problems/smallest-number-on-left3403/1?page=2&category[]=Stack&sortBy=submissions

vector<int> leftSmaller(int n, int a[]){
        // code here
        stack<int> st;
        vector<int> ans(n,-1);
        st.push(n-1);
        for (int j=n-2;j>=0;j--){
            while(!st.empty() && a[j] < a[st.top()]){
                ans[st.top()] = a[j];
                st.pop();
            }
            st.push(j);
        }
        return ans;
    }
