#Given an array of integers, return indices of the two numbers such that they add up to a specific target.
#You may assume that each input would have exactly one solution, and you may not use the same element twice.

class Solution(object):
  def twoSum(self, nums, target):
    for i in range(len(nums)):                                              #Iterating over the given array "nums"
        if target-nums[i] in nums and nums.index(target-nums[i])!=i:        #Checks if the difference between target and the current nums element is in "nums" and avoids the case of considering itself.
          return([i,nums.index(target-nums[i])])
    
    
