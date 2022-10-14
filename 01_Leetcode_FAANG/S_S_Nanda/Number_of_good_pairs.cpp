class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> count;
        int ans=0;
        
        for(auto it: nums)
        {
            ans += count[it];
            count[it]++;
        }
        return ans;
    }
};
