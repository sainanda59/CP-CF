class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int c=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
            c=c+nums[i]*(pow(-1,i%2));
        return c;
    }
};
