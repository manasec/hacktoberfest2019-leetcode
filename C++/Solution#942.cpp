/*
This is an Interesting problem and can be soolved using a simple vector.
Its kind of like two pointer technique, where we fill the result array with smaller values if there is an Increase, and bigger values if a decrease is coming and the domain is (0, n) elements.

*/
   
   vector<int> diStringMatch(string S) {
        int left = count(S.begin(), S.end(), 'D'), right = left;
        vector<int> res = {left};
        for (char &c : S)
            res.push_back(c == 'I' ? ++right : --left);
        return res;
    }
