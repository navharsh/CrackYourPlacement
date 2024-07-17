// https://leetcode.com/problems/valid-parentheses/submissions/1324418111

class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> st;
        for (int i = 0; i < s.length(); i++)
        {
            char ch = s[i];
            if (st.empty() && ch == '(' || ch == '[' || ch == '{')
            {
                st.push(ch);
            }
            else if (!st.empty() && ((st.top() == '(' && ch == ')') || (st.top() == '[' && ch == ']') || (st.top() == '{' && ch == '}')))
            {
                st.pop();
            }
            else
            {
                st.push(ch);
            }
        }
        if (st.empty())
        {
            return true;
        }
        return false;
    }
};