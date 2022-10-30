class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        
  int prefSum = 0;
  
  unordered_map<int, int> mp;
  for(int i=0; i<nums.size(); i++)
  {
    prefSum += nums[i];
    prefSum %= k;

    if(prefSum == 0 && i) return true;

    if(mp.find(prefSum) != mp.end())  // Found the required prefix sum 
    {
      if(i - mp[prefSum] > 1) return true; // check if atleast 2 elements are there or not
    }
    else mp[prefSum] = i;
  }

  return false; 
        
    }
};