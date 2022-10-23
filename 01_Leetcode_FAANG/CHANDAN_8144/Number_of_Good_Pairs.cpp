class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n=nums.size(),ctr=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]==nums[j])
                    ctr++;
            }
        }
        return ctr;
    }
};
