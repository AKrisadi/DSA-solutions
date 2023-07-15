// Problem Link - https://practice.geeksforgeeks.org/problems/delete-middle-element-of-a-stack/1
class Solution
{
    public:
    //Function to delete middle element of a stack.
    void helper(stack<int> &s,int n,int ind){
        if (s.empty()) return ;
        if (ind == n){
            s.pop();
        }
        int num = s.top();
        s.pop();
        helper(s,n,ind+1);
        s.push(num);
    }
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        // code here.. 
        int mid = s.size() / 2;
        helper(s,mid,0);
    }
};
