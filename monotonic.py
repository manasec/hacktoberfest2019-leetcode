class Solution(object):
    def isMonotonic(self, A):
        """
        :type A: List[int]
        :rtype: bool
        """
        flag=0
        count=0
        count1=0
        for i in range(1,len(A)):
            if(A[i]>=A[i-1]):
                count+=1
            if(A[i]<=A[i-1]):
                count1+=1
        if(count==len(A)-1):
            return 1
        elif(count1==len(A)-1):
            return 1
        else:
            return 0
            
            
            
