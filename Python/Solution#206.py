# 206. Reverse Linked List

"""
    Reverse a singly linked list.

    Example:

    Input: 1->2->3->4->5->NULL
    Output: 5->4->3->2->1->NULL
    Follow up:

    A linked list can be reversed either iteratively or recursively. Could you implement both?
"""

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

# Solution:
#   For each node on the head, insert it on the start of the list
#   instead of inserting it at the end

class Solution:
    def reverseList(self, head: ListNode) -> ListNode:

        head_current = head

        if head is None:
            return head

        # Initialize the reversed_list with the first element
        reversed_list = ListNode(head.val)

        # While we don't reach the end of the head
        while not head_current.next is None:

            # Next on head
            head_current = head_current.next

            # Create a new node
            new_node = ListNode(head_current.val)
            
            # Put the new_node at the start of the Linked List
            new_node.next = reversed_list # Point to the list

            # Reversed_list now points to the start
            reversed_list = new_node

        return reversed_list
