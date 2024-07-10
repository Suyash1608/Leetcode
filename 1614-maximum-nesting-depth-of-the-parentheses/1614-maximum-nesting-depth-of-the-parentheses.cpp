class Solution {
public:
    int maxDepth(string s) {
        int open=0;
        int result=0;
        for(auto c : s)
        {
            result=max(result,open);
            if(c=='(')
            {
                open++;
            }
            if(c==')'){
                open--;
            }
            
        }
    return result;
    }
};