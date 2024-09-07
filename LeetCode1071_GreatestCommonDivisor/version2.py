class Solution:
    def gcdOfStrings(self, str1: str, str2: str) -> str:
        len1 = len(str1)
        len2 = len(str2)

        def valid(k):
            if len1%k or len2%k:
                return False
            n1 = len1//k #must use integer division, this is because, 6/3 will give you 2.0, the 1 dp will cause probelm. However, 6//3 will give us 2, a integer division. 
            n2 = len2//k
            base = str1[:k]
            return str1 == n1*base and str2 == n2*base

        for i in range(min(len1,len2),0,-1):
            if valid(i):
                return str1[:i]
        return ""


#test Case
str1 = "ABCABC"
str2 = "ABC"

solution = Solution()
result = solution.gcdOfStrings(str1, str2)
print(result)