#week04 - 1.py
#LeetCode 2579. Count Total Number of Colored Cells
class Solution:
    def coloredCells(self, n: int) -> int:
        ans = 0    #  迴圈前面, ans 先清空
        for i in range(1, n*2, 2):  # Python 的 For 迴圈
            ans += i
        for i in range(1, n*2-1, 2):
            ans += i
        return ans
