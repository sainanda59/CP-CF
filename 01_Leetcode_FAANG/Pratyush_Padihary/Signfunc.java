class Solution {
    public int arraySign(int[] nums) {
        int i,mul=1;
        int signfunc=0;
        for(i=0;i<nums.length;i++)
        {
            mul=mul*nums[i];
        }
        if (mul>0)
            signfunc=1;
        else if(mul<0)
            signfunc=-1;
        else if(mul==0)
            signfunc=0; 
    return signfunc;
    }
}
