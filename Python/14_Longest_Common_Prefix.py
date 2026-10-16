class Solution:
    def longestCommonPrefix(self, strs: list[str]) -> str:
        prefix=strs[0]
        for string in strs[1:]:
            while not string.startswith(prefix):
                prefix=prefix[:-1]
                if not prefix:
                    return ""
        return prefix
        
