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