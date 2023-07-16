// Problem Link - https://practice.geeksforgeeks.org/problems/queue-reversal/1
class Solution
{
    public:
    queue<int> rev(queue<int> q)
    {
        // to reverse first add the elements 
        // of the queue to a stack and fill it back to queue
        stack<int> st;
        while (!q.empty()){
            st.push(q.front());
            q.pop();
        }
        
        while (!st.empty()){
            q.push(st.top());
            st.pop();
        }
        
        return q;
        
    }
};
