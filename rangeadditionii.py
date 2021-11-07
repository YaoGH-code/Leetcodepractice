class Solution(object):
    def maxCount(self, m, n, ops):
        mina = m
        minb = n
        for a,b in ops:
            mina = min(a, mina)
            minb = min(b, minb)
        return mina * minb
