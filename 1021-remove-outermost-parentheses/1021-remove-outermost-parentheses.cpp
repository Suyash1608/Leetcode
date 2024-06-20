class Solution {
public:
    string removeOuterParentheses(string s) {
         string out;
        stack<char> st;
        for(auto i : s)
        {
            if(i=='(')
            {
                if(!st.empty())
                {
                    out+=i;
                }
                st.push(i);
            }
            if(i==')')
            {
                st.pop();
                if(!st.empty())
                {
                    out+=i;
                }
            }
        }
        return out;
    }
};