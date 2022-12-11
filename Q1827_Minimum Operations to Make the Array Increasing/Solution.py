class Solution:
    def minOperations(self, nums: List[int]) -> int:
        pre=nums[0]-1
        res=0
        for i in nums:
            pre=max(pre+1, i)
            res+=pre-i
        return res
//TC:O(N)
//SC:O(1)