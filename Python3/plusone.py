class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        x=""
        for i in digits:
            x+=str(i)
        x=int(x)
        x+=1
        x=str(x)
        return [i for i in x]
        
