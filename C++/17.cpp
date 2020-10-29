/* 
    Problem 17. Letter Combinations of a Phone Number
    
    Given a string containing digits from 2-9 inclusive,
    return all possible letter combinations that the number could represent.
    Return the answer in any order.
    
    https://leetcode.com/problems/letter-combinations-of-a-phone-number/
*/

class Solution {
public:
    string mp[10] = {
        "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"
    };
    
    void helper(int st, string digits, vector<string>& ans) {
        if(st == digits.length()) {
            ans.push_back(digits);
            return;
        }
        char temp = digits[st];
        string vals = mp[temp - '0'];
        for(int i = 0; i < vals.length(); i++) {
            digits[st] = vals[i];
            helper(st+1, digits, ans);
        }
        digits[st] = temp;
    }
    
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.length() > 0)
            helper(0, digits, ans);
        return ans;
    }
};