class Solution(object):
    def arrangeCoins(self, n):
        complete = True
        counter = 1
        while complete:
            if n >= counter:
                n=n-counter
                counter += 1
            else:
                counter -= 1
                complete = False   
        return counter

#time counter:
import time
start = time.time()
for i in range(1, 1000000):   
    Solution().arrangeCoins(i)
end = time.time()
print(end-start)


