class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size();
        if (n == 0) return {};
        int m = matrix[0].size();
        int l = 0, r = m - 1, t = 0, b = n - 1;
        vector<int> result;
        while (l <= r && t <= b) {
            for (int i = l; i <= r; i++) {
                result.push_back(matrix[t][i]);
            }
            t++;
            
            for (int i = t; i <= b; i++) {
                result.push_back(matrix[i][r]);
            }
            r--;
            
            if (t <= b) {
                for (int i = r; i >= l; i--) {
                    result.push_back(matrix[b][i]);
                }
                b--;
            }
            
            if (l <= r) {
                for (int i = b; i >= t; i--) {
                    result.push_back(matrix[i][l]);
                }
                l++;
            }
        }
        return result;
    }
};
