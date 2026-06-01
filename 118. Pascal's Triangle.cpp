class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        
        ans.push_back({1});
        for(int i=0;i<numRows-1;i++)
        {
            vector<int> row;
            vector<int> say=ans[i];
            row.push_back(1);
            for(int i=0;i<say.size()-1;i++)
            {
                row.push_back(say[i]+say[i+1]);
            }
            row.push_back(1);
            ans.push_back(row);
        }
        return ans;
    }
};