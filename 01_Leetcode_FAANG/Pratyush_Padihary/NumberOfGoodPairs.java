class Solution {
    public int numIdenticalPairs(int[] nums) {
        int c=0;
        int i,j;
     for(i=0;i<nums.length;i++)
     {
         for(j=0;j<nums.length;j++)
         {
             if(i<j)
             {
           if(nums[i]==nums[j])
               c++;
             }
         }
     }
        return c;
    }
}
