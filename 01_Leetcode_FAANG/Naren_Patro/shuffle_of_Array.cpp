class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int i = 0;
        vector<int> v;
        while(i<n and n < nums.size()){
            v.push_back(nums[i]);
            v.push_back(nums[n]);
            i++;
            n++;
        }
        return v;
    }
};