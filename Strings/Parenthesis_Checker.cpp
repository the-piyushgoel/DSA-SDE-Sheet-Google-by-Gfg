#include <bits/stdc++.h>
using namespace std;
bool isBalanced(string &s)
{
    stack<char> st;
    for (auto it : s)
    {
        if (st.empty())
            st.push(it);
        else
        {
            if (it == '[' || it == '{' || it == '(')
                st.push(it);
            else
            {
                if (it == ']' && st.top() != '[')
                    return false;
                if (it == ')' && st.top() != '(')
                    return false;
                if (it == '}' && st.top() != '{')
                    return false;
                else
                {
                    st.pop();
                }
            }
        }
    }
    if (st.empty())
        return true;
    return false;
}