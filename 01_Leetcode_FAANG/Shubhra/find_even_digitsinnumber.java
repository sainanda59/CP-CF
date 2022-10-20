class Solution {
    public int findNumbers(int[] nums) {
        int n = nums.length;
        int x=0;
        for(int i=0;i<n;i++ ){
            int count=1;
            while(nums[i]>=10){
                count++;
                nums[i]=nums[i]/10;
            }
            if(count%2==0){
                x++;
            }
        }
        return x;
        
    }
}
