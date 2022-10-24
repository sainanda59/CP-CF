class Solution {
public:
    int arraySign(vector<int>& nums) {
        
        bool ifzero=false;
        int count=0;
        for(auto x:nums)
        {
            if(x<0)
            {
                count++;
            }
            else if(x==0)
            {
                ifzero=true;
                break;
            }
        }
        
        if(ifzero)
        {
            return 0;
        }
        else if(count%2!=0)
        {
               return -1;
            
        }
        
        return 1;
        
    }
};
