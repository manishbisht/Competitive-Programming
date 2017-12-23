class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        for i in xrange(len(nums)):
            for j in xrange(i + 1, len(nums)):
                if nums[i] + nums[j] == target:
                    return [i, j]
        
