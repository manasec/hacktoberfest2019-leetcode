class Solution {
public:
    void nextPermutation(vector<int> &num) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int sz = num.size();
        int k=-1;
        int l;
        //step1
        for (int i=0;i<sz-1;i++){
            if (num[i]<num[i+1]){
                k=i;
            }
        }
        if (k==-1){
            sort(num.begin(),num.end());
            return;
        }
        
        //step2
        for (int i=k+1;i<sz;i++){
            if (num[i]>num[k]){
                l=i;
            }
        }
        //step3        
        int tmp = num[l];
        num[l]=num[k];
        num[k]=tmp;
        //step4
        reverse(num.begin()+k+1,num.end());
    }
};
