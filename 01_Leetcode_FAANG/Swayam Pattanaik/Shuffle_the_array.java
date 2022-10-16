class Solution {
    public int[] shuffle(int[] nums, int n) {
        int j=0;
        int ans[]=new int[2*n];
        for(int i=0;i<nums.length;i++)
        {
            if(i%2==0)
            {
                ans[i] = nums[j++];
            }
            else
                ans[i] = nums[n++];
        }
        return ans;
    }
}
