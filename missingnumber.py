class Solution(object):
    def missingNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        nums.sort()
        k=-1
        for i in range(len(nums)):
            if(i!=nums[i]):
                k=i
                break
        if(k==-1):
            return(i+1)
        else:
            return(k)
        
        
