/*
Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.

 

Example 1:

Input: n = 3
Output: ["((()))","(()())","(())()","()(())","()()()"]
Example 2:

Input: n = 1
Output: ["()"]
 

Constraints:

1 <= n <= 8
*/

class Solution {
    public void helper(String s, int co, int cc, List<String> res, int n){
        if(cc>co)
            return;
        if(co>n)
            return;
        if(co==n && cc==n){
            res.add(s);
            return;
        }
        
        s = s+"(";
        helper(s, co+1, cc, res, n);
        s = s.substring(0,s.length()-1);
        s= s+")";
        helper(s, co, cc+1, res, n);
        
    }
    public List<String> generateParenthesis(int n) {
        
         List<String> r = new ArrayList<>();
        if(n<=0){
            r.add("");
            return r;
        }
        if(n==1){
            r.add("()");
            return r;
        }
       
        helper("(", 1, 0, r, n);
        return r;
    }
}
