class Solution:
    def maxArea(self, height):
        l, r = 0, len(height)-1
        ans = 0
        while l < r:
            temp=(r-l)*min(height[l], height[r])
            ans = max(temp, ans)
            if height[l] <= height[r]:
                l += 1
            else:
                r -= 1
        return ans    


s = Solution()
print (s.maxArea([1,2,3,4]))