class Solution(object):
    def searchInsert(self, nums, target):
        f=0
        for i in nums:
            if i == target:
                f=1
                return nums.index(i)
            if i> target:
                f=1
                return nums.index(i)

        if not f:
            return len(nums)