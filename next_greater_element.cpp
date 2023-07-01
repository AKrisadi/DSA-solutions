Problem Link - https://practice.geeksforgeeks.org/problems/next-larger-element
vector<long long> nextLargerElement(vector<long long> arr, int n){
  
        vector<long long> ans(n,-1);
        stack<long long> st;
        st.push(0);
        
        for (int i=1;i<n;i++){
            while (!st.empty() && arr[i] > arr[st.top()]){
                ans[st.top()] = arr[i];
                st.pop();
            }
            st.push(i);
        }
        
        return ans;
  
    }
