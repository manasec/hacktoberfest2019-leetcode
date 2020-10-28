/*Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans,temp=nums;
        sort(temp.begin(),temp.end());
        int start=0,end=temp.size()-1,sum,a,b,i;
        while(true){
            sum=temp[start]+temp[end];
            if(sum==target){
                a=temp[start];
                b=temp[end];
                break;
            }
            else if(sum<target){
             start++;   
            }
            else{
                end--;
            }
        }
        for(i=0;i<nums.size();i++){
            if(a==nums[i] || b==nums[i]){
                ans.push_back(i);
            }
        }
        return ans;
        }
};
