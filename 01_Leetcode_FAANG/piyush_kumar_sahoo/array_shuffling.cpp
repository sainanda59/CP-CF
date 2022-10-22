class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> shuffled;
        for(int i=0,j=i+n,k=0;k<2*n;k++)
        {
            if(k%2==0)
            {
                shuffled.insert(shuffled.end(),nums[i]);
                i++;
            } 
            else
            {
                shuffled.insert(shuffled.end(),nums[j]);
                j++;
            }
        }
        return shuffled;
    }
};