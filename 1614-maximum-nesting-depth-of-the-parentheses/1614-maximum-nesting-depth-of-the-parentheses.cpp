class Solution {
public:
    int maxDepth(string s) {
        int open=0;
        int result=0;
        stack<char> ch;
        for(auto c : s)
        {
            result=max(result,open);
            if(c=='(')
            {
                ch.push(c);
                open++;
            }
            if(c==')'){
                ch.pop();
                open--;
            }
            
        }
    return result;
    }
};