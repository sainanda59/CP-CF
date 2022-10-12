class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans;
        int a=0,b=n;
        for(int i=0;i<2*n;i++)
        {
            if(i%2==0)
                ans.push_back(nums[a++]);
            else
                ans.push_back(nums[b++]);
        }
        return ans;
    }
};
