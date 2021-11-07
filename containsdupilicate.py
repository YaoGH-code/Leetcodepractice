# class Solution(object):
#     def containsDuplicate(self, nums):
#         if len(nums) != len(set(nums)):
#             return True
#         return False
class Solution(object):
    def containsDuplicate(self, nums):
        nums.sort()
        for i in range(0,len(nums)-1):
            if nums[i] == nums[i+1]:
                return True

        return False
