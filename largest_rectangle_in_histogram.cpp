// Problem Link - https://leetcode.com/problems/largest-rectangle-in-histogram/description/
vector<int> nextSmaller(vector<int>& heights,int n){
        vector<int> ans(n,n);
        stack<int> st;
        st.push(0);
        for (int i=1;i<n;i++){
            while (!st.empty() && heights[i] < heights[st.top()]){
                ans[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }
        return ans;
    }
    vector<int> previousSmaller(vector<int>& heights,int n){
        vector<int> ans(n,-1);
        stack<int> st;
        st.push(n-1);
        for (int i=n-2;i>=0;i--){
            while (!st.empty() && heights[i] < heights[st.top()]) {
                ans[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }
        return ans;
    }
    int largestRectangleArea(vector<int>& heights) {
        // First get the next smaller element
        // Then, find the previous smaller element
        // Find the maximum area and return the answer
        int n = heights.size();
        vector<int> nS = nextSmaller(heights,n);
        vector<int> pS = previousSmaller(heights,n);

        int ans = INT_MIN;
        for (int i=0;i<n;i++){
            int length = heights[i];
            int breadth = nS[i] - pS[i] - 1;
            int area = length*breadth;
            ans = max(ans,area);
        }
        return ans;
    }
