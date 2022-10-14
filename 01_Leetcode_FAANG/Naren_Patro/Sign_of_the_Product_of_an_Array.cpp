class Solution {
public:
    int arraySign(vector<int>& nums) {
      int f=0;
        int a = 0;
        for(int i = 0 ; i < nums.size();i++){
            if(nums[i] < 0){
               f++; 
            }
            if(nums[i] == 0){
                return 0;
            }
        }
        if(f%2 ==0){
            return 1;
        }else return -1;
       
    }
};