'''Given an integer, write a function to determine if it is a power of two.
'''


class Solution(object):
    def isPowerOfTwo(self, n):
        """
        :type n: int
        :rtype: bool
        """
        x=1
        t=0
        while(True):
            if x>=n:     
                if x==n:
                    return True
                else:
                    return False
            x=2**t
            t+=1
            if x==n:
                return True
            
            
                    
            
             
