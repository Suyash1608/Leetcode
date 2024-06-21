class Solution {
public:
    string removeOuterParentheses(string s) {
        string out;
        int count = 0;
        
        for(auto i : s) {
            if(i == '(') {
                if(count > 0) {
                    out += i;
                }
                count++;
            }
            else if(i == ')') {
                count--;
                if(count > 0) {
                    out += i;
                }
            }
        }
        
        return out;
    }
};
