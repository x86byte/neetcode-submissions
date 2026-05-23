class Solution:
    def isHappy(self, n: int)-> bool:
        def sumArr(a):
            s = 0
            for i in range(len(a)):
                s = s + a[i] * a[i]
            return s
                
        res = []        
        while len(res) == len(set(res)):
            li = list(str(n))
            ln = []
            for i in li:
                ln.append(int(i))
            n = sumArr(ln)
            if n == 1:
                return True
            res.append(n)
                
        return False