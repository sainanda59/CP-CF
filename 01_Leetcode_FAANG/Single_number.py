from typing import List

class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        ans = 0
        for n in nums:
            ans ^= n
        return ans
        
ans = Solution()
print(ans.singleNumber([4,1,2,1,2,3,3]))
