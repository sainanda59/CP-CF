class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int s=2*nums.size();
        vector<int> ans;
        for(int i=0;i<s;i++)
        {
            int j=i%nums.size();
            ans.push_back(nums[j]);
        }
        return ans;
    }
};
