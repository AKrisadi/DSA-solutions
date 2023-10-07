#include <bits/stdc++.h> 
void rec(int open,int close,string &cur,vector<string>&ans)
{
    if (open==0 && close==0)
    {
        ans.push_back(cur);
    }
    if (open>0)
    {
        cur.push_back('(');
        rec(open-1,close,cur,ans);
        cur.pop_back();
    }
    if (close>open)
    {
        cur.push_back(')');
        rec(open,close-1,cur,ans);
        cur.pop_back();
    }
}
vector<string> balancedParantheses(int n)
{
    int open=n;
    int close=n;
    vector<string>ans;
    string cur="";
    rec(open,close,cur,ans);
    return ans;
}
