class Solution(object):
    def twoSum(self, nums, target):
        for number in nums:
            index = nums.index(number)
            if target-number in nums[nums.index(number)+1:]:
                if index == nums.index(target-number): #two
                    return [nums.index(number), nums[index+1:].index(target-number)+1+index]
                else:
                    return [nums.index(number), nums.index(target-number)]

s = Solution()
print (s.twoSum([3,3],6))