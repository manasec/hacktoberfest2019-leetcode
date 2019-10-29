class Solution {
public:
    string shiftingLetters(string S, vector<int>& shifts) {
        long long a = 0;
        char c;
        stack<long long> newshifts;
        for(long long i = shifts.size() - 1; i >= 0 ; i--){
            a += shifts[i];
            newshifts.push(a);
        }
        string result = "";
        for(long long i = 0; i < shifts.size(); i++){
            c = (S[i] - 97 + newshifts.top()) % 26 + 97;
            result += c;
            newshifts.pop();
        }
        return result;
    }
};
