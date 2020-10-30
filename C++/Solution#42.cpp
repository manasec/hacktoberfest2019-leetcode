/*
42. Trapping Rain Water
Hard

Example 1:


Input: height = [0,1,0,2,1,0,1,3,2,1,2,1]
Output: 6
Explanation: The above elevation map (black section) is represented by array [0,1,0,2,1,0,1,3,2,1,2,1]. In this case, 6 units of rain water (blue section) are being trapped.
Example 2:

Input: height = [4,2,0,3,2,5]
Output: 9

*/

class Solution {
public:
    int trap(vector<int>& height) {
        if(height.size()==0)
            return 0;
        int i,pi=0,wt=0,s=(int)(height.size()-1),tp=0;
        int p=height[0];
        for(i=1;i<=s;i++)
        {
            if(height[i]>p)
            {
                pi=i;
                p=height[i];
                tp=0;
            }
            else
            {
                wt+=p-height[i];
                tp+=p-height[i];
            }
        }
        if(pi<s)
        {
            wt-=tp;
            p=height[s];
            for(i=s-1;i>=pi;i--)
            {
                if(height[i] >= p)
                {
                  p = height[i];
                } 
                else
                {
                  wt += p - height[i];
                }
            }
        }
        return wt;
    }
};