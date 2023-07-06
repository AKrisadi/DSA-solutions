// Problem Link - https://practice.geeksforgeeks.org/problems/stock-span-problem-1587115621/1
//Function to calculate the span of stock price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
       //first by looking at the input we can say that
       //we need to find the previous greater element
       //from the right for every index
       vector<int> ans(n,1);
       stack<int> st;
       st.push(n-1);
       for (int i=n-2;i>=0;i--){
           // as long as the i'th element is larger than stack's top,
           // in the answer update that top's index with its span
           while (!st.empty() && price[i] > price[st.top()]){ 
               ans[st.top()] = st.top() - i; // span calculation
               st.pop();
           }
           st.push(i);
       }
       // now there may be some indexes which didn't get any 
       // maximum element than their value so there answer would
       // be = index of that element + 1;
       while (!st.empty()){
           int ind = st.top();
           st.pop();
           ans[ind] = ind + 1;
       }
       return ans;
    }
