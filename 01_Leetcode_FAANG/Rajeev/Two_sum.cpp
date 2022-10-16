class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int> vec;
        unordered_map<int,int>mp;//key-nums,value-index
        
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]=i;
        }
        
        for(int i=0;i<nums.size();i++){
            int k= target-nums[i];
          auto it= mp.find(k);
            if(it!=mp.end() && (*it).second!=i){
                vec.push_back(i);
                vec.push_back((*it).second);
                break;
            }
              
        }
        return vec;
    }
};
