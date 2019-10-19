/**
 * Solution for leetcode problem binary tree max path sum
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int maxPathUtil(TreeNode* root, int& res)
    {
        if(root==NULL)
            return 0;
        
        int l=maxPathUtil(root->left, res);
        int r=maxPathUtil(root->right, res);
        
        int passback = max(max(l,r)+root->val, root->val);
        int maxinc = max(passback, l+r+root->val);
        res=max(res, maxinc);
        return passback;
    }
    
    int maxPathSum(TreeNode* root) {
        int res=INT_MIN;
        maxPathUtil(root, res);
        return res;
    }
};
