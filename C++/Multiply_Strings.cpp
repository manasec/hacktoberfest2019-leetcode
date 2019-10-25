class Solution {
public:
    string helper(string s, char c){
        int length = s.length();
        string ans(length + 1, '0');
        int carry = 0, p = length;
        for(int j = length - 1;j >= 0; --j){
            int tmp = carry + (c - '0') * (s[j] - '0');
            if(tmp > 9){
                carry = tmp / 10;
                tmp %= 10;
            }else{
                carry = 0;
            }
            ans[p--] = tmp + '0';
        }
        if(carry > 0){
            ans[p] = carry + '0';
        }
        int k = 0;
        while(ans[k] == '0' && k < ans.length() - 1){
            ++k;
        }
        ans = ans.substr(k);
        return ans;
    }
    string multiply(string num1, string num2) {
        if(num1 == ""){
            return num2;
        }else if(num2 == ""){
            return num1;
        }
        int length1 = num1.length();
        int length2 = num2.length();
        string ans(length1 + length2 + 1, '0');
        int p = length1 + length2;
        for(int i = length1 - 1;i >= 0; --i){
                string tmp = helper(num2, num1[i]);
                //cout <<"num2: "<<num2<<" num1[i]: "<<num1[i]<< " tmp: " << tmp <<" p:"<<p<<endl;
                int carry = 0, k = p--;
                for(int m = tmp.length() - 1; m >= 0; --m){
                    int tmpsum = carry + tmp[m] - '0' + ans[k] - '0';
                    if(tmpsum > 9){
                        tmpsum %= 10;
                        carry = 1;
                    }else{
                        carry = 0;
                    }
                    ans[k] = tmpsum + '0';
                    --k;
                }
                if(carry > 0){
                    ans[k] += 1;
                }
                //cout << ans << endl;
        }
        int k = 0;
        while(ans[k] == '0' && k < ans.length() - 1){
            ++k;
        }
        ans = ans.substr(k);
        return ans;
    }
};