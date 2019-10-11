'''Given a string s and a string t, check if s is subsequence of t. You may assume that there is only lower case English letters in both s and t.
 t is potentially a very long (length ~= 500,000) string, and s is a short string (<=100). A subsequence of a string is a new string which is formed from the original string by
 deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters. (ie, "ace" is a subsequence of "abcde" while "aec" is not).
 '''

class Solution(object):
    def isSubsequence(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        for i in s:                       #Iterating over given string 's'
            if i not in t:                #If the current element is not in t, directly returns False
                return False
        
            t=t[t.index(i)+1:]            #Updating t after every iteration 
        return True
            
       
