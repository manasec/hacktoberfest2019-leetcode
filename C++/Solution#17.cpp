// 17. Letter Combinations of a Phone Number

/*
    Given a string containing digits from 2-9 inclusive, return all possible letter combinations that the number could represent.

    A mapping of digit to letters (just like on the telephone buttons) is given below. Note that 1 does not map to any letters.

    IMAGE EXPLAINING THE TELEPHONE BUTTONS HERE

    Example:

    Input: "23"
    Output: ["ad", "ae", "af", "bd", "be", "bf", "cd", "ce", "cf"].
    Note:

    Although the above answer is in lexicographical order, your answer could be in any order you want.
*/

// Solution
//   An recursive function that finds all the possibilities and add it to the 
//   vector "answer"
//
//   The recursive function has the current index of the string, so it can
//   iterate through the possibilities on this point, and recall itself


class Solution {
public:
    // Map of all correspondences, so we can use a for-each later
    map<char , string> telephone_buttons_map = {
        {'2' , "abc"},
        {'3' , "def"},
        {'4' , "ghi"},
        {'5' , "jkl"},
        {'6' , "mno"},
        {'7' , "pqrs"},
        {'8' , "tuv"},
        {'9' , "wxyz"}
    };
    
    // The recursive function
    //
    // See all letters in digits[i] using the map above, and recall itself
    //
    // Store the result on result_string, and add it to the vector when
    // index == digits.size()
    // 
    void recursive_function(vector<string>& answer ,
                            string& digits ,
                            int index = 0 ,
                            string result_string = "")
    {
        // If we already read all the positions
        if (index == digits.size()) {
            // Add the resultant string to the answer vector
            answer.push_back(result_string);
            return;
        }

        // For each possible letter, recall the recursive function        
        for (char c : telephone_buttons_map[digits[index]])
        {
            recursive_function(answer , digits , index+1 , result_string + c);
        }
    }
    
    vector<string> letterCombinations(string digits) {
        
        vector<string> answer;

        if (digits.size() == 0) {
            return answer;
        }
        
        recursive_function(answer , digits);
        return answer;
    }
};
