class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> new1;
        for(int i=0;i<nums.size();i++)
        {
            new1.push_back({nums[i],i});
        }
        sort(new1.begin(),new1.end());
        int l=0;
        int r=nums.size()-1;
        vector<int> v;
        while(l<r)
        {
            if(new1[l].first + new1[r].first>target)
            {
                r--;
            }
            else if(new1[l].first+new1[r].first<target)
            {
                l++;
            }
            else
            {
                v.push_back(new1[l].second);
                v.push_back(new1[r].second);
                break;
            }
        }
        return v;
    }
};
