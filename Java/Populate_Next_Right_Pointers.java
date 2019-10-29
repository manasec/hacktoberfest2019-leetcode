// Definition for a Node.
class Node {
    public int val;
    public Node left;
    public Node right;
    public Node next;

    public Node() {}

    public Node(int _val,Node _left,Node _right,Node _next) {
        val = _val;
        left = _left;
        right = _right;
        next = _next;
    }
};
*/
class Solution {
    public Node connect(Node root) {
        if(root!=null){
        root.next=null;
        connectRecur(root);
        }
        return root;
    }
    
    void connectRecur(Node p)  
    { 
        // Base case 
        if (p == null) 
            return; 
   
        // Set the nextRight pointer for p's left child 
        if (p.left != null) 
            p.left.next = p.right; 
   
        // Set the nextRight pointer for p's right child 
        // p->nextRight will be NULL if p is the right most child  
        // at its level 
        if (p.right != null)  
            p.right.next = (p.next != null) ?  
                                         p.next.left : null; 
   
        // Set nextRight for other nodes in pre order fashion 
        connectRecur(p.left); 
        connectRecur(p.right); 
    } 
