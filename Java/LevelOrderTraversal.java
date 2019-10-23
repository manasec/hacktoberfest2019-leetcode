/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */
class Solution {
    public List<List<Integer>> levelOrder(TreeNode root) {

       
        Queue <TreeNode> que=new LinkedList<TreeNode>();

        List<List<Integer>> list=new LinkedList<>();
        if (root==null)
            return list;
        que.add(root);
        TreeNode tmp=null;
        int level=0;
        // List l;
        while(que.isEmpty()==false)
        {
            
            int numOfChild=que.size();
           List<Integer>  l=new ArrayList<Integer>();
            int i=0;
            while(i<numOfChild)
            {

                tmp=que.poll();
                l.add(tmp.val);
                if(tmp.left!=null)
                {
                // System.out.println("ihlihli " + tmp.val);
                    
                    que.add(tmp.left);
                }
                if(tmp.right!=null)
                {
                    que.add(tmp.right);
                }
                i++;
            }
            // que.remove();
            
            list.add(l);
                System.out.println("ihlihli " + tmp.val+  "  "+l.size());
            
            // l.clear();
        }
        return list;
    }
}
