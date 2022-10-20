class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int> odd,even,merged;
        for(int i=0;i<nums.size();i+=2)
            even.insert(even.end(),nums[i]);
        for(int i=1;i<nums.size();i+=2)
            odd.insert(odd.end(),nums[i]);
        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end(),greater<int>());
        for(int i=0;i<nums.size();i++)
        {
            if(i%2==0)
                merged.insert(merged.end(),even[i/2]);
            else
                merged.insert(merged.end(),odd[i/2]);
        }
        return merged;
    }
};
