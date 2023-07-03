// Problem Link - https://www.codingninjas.com/studio/problems/redundant-brackets_975473
bool findRedundantBrackets(string &s)
{
    // Write your code here.
    stack<char> st;
    for (int i=0;i<s.length();i++){
        if (s[i] == ')'){
            char ch = st.top();
            st.pop();
            bool flag = true;
            while (!st.empty() && ch != '('){
                if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
                    flag = false;
                ch = st.top();
                st.pop();
            }
            if (flag == true) return true;
        }
        else st.push(s[i]);
    }

    return false;
}
