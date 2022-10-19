class Solution {
public:
    int i,c=0;
    int digit(int n)
    {
        i=1;
        while(true)
        {
            if(n<pow(10,i))
                break;
            i++;
        }
        return i%2;
    }
    int findNumbers(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            if(digit(nums[i])==0)
                c++;
        }
        return c;
    }
};
