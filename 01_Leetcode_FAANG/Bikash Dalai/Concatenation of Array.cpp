class Solution {
public:
    vector<int> getConcatenation(vector<int>& res) {
        // vector<int>res;
        int i=res.size();
        for(int j=0;j<i;j++)
        {
            res.push_back(res[j]);
            // i++;
        }
        return res;
    }
};