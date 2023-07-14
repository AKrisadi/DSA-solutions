// Problem Link - https://practice.geeksforgeeks.org/problems/max-rectangle/1
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define MAX 1000


// } Driver Code Ends
/*You are required to complete this method*/

class Solution{
  public:
    vector<int> nextSmaller(int M[], int n, int m){
        stack<int> st;
        vector<int> ans(m,m);
        
        for (int i=0;i<m;i++){
            while(!st.empty() && M[i] < M[st.top()]){
                ans[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }
        
        return ans;
    }
    vector<int> previousSmaller(int M[], int n, int m){
        stack<int> st;
        vector<int> ans(m,-1);
        
        for (int i=m-1;i>=0;i--){
            while(!st.empty() && M[i] < M[st.top()]){
                ans[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }
        
        return ans;
    }
    int largestArea(int M[], int n, int m){
        // Get the next smaller element for every index
        // Get the previous smaller element for every index
        // Find the maximum area possible 
        vector<int> nS = nextSmaller(M,n,m);
        
        vector<int> pS = previousSmaller(M,n,m);
        
        int ans = INT_MIN;
        for (int i=0;i<m;i++){
            int length = M[i];
            int breadth = nS[i] - pS[i] - 1;
            int area = length * breadth;
            ans = max(ans,area);
        }
        
        return ans;
    }
    int maxArea(int M[MAX][MAX], int n, int m) {
        // Your code here
        int area = largestArea(M[0],n,m);
        for(int i=1;i<n;i++){
            for (int j=0;j<m;j++){ 
                if (M[i][j] != 0)
                    M[i][j] = M[i][j] + M[i-1][j];
                else
                    M[i][j] = 0;
            }
            area = max(area,largestArea(M[i],n,m));
        }
        return area;
    }
    
};


//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;

    int M[MAX][MAX];

    while (T--) {
        int n, m;
        cin >> n >> m;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> M[i][j];
            }
        }
        Solution obj;
        cout << obj.maxArea(M, n, m) << endl;
    }
}

// } Driver Code Ends
