// Problem Link - https://practice.geeksforgeeks.org/problems/the-celebrity-problem/1
int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here 
        stack<int> st;
        for (int i=0;i<n;i++){
            st.push(i);
        }
        
        while (st.size() > 1){
            int t1 = st.top();
            st.pop();
            int t2 = st.top();
            st.pop();
            
            if (M[t1][t2] == 1)
                st.push(t2);
            
            else st.push(t1);
        }
        
        int potentialCelebrity = st.top();
        
        for (int i=0;i<n;i++){
            if (i == potentialCelebrity) continue;
            
            if (M[potentialCelebrity][i] == 1) return -1;
            
            if (M[i][potentialCelebrity] == 0) return -1;
        }
        
        return potentialCelebrity;
    }
