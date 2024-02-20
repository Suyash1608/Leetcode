class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        for(int i=1;i<=numRows;i++)
        {
            vector<int> tr;
            int item=1;
            tr.push_back(item);
            for(int j=1;j<i;j++)
            {
                item=item*(i-j);
                item=item/j;
                tr.push_back(item);
            }
            result.push_back(tr);
        }
        return result;
    }
};