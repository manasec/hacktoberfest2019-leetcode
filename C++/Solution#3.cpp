/*
3. Longest Substring Without Repeating Characters
Medium


Given a string s, find the length of the longest substring without repeating characters.

 

Example 1:

Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.
Example 2:

Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.

*/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int beg=0;
        int end=0;
        unsigned long int len=0;
        set<char> st;
        while(end<s.length())
        {
            if(!(st.count(s[end])))
            {
                st.insert(s[end]);
                len=max(st.size(),len);
                end++;
            }
            else
            {
                st.erase(s[beg]);
                beg++;
            }
        }
        return len;
    }
};