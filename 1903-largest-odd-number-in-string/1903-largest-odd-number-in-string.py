class Solution(object):
    def largestOddNumber(self, num):
        """
        :type num: str
        :rtype: str
        """
        out=""
        possible=""
        for i in range(len(num)):
            x=int(num[i])
            if x%2 !=0:
                possible+=num[i]
                out=possible
            else:
                possible+=num[i]
        return out
            