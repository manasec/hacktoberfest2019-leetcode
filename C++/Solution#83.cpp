// 83. Remove Duplicates from Sorted List

/*
    Given a sorted linked list, delete all duplicates such that each element appear only once.

    Example 1:

    Input: 1->1->2
    Output: 1->2
    Example 2:

    Input: 1->1->2->3->3
    Output: 1->2->3
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

// Solution:
//   Create a linked list, check the first element, and then from the second one
//   always check if the previous element is repeated

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {

        // Return case if the list is empty
        if (head == NULL)
            return NULL;

        // Already fill with the first value
        ListNode* answer = new ListNode(head->val);

        // Adding to the end_tip to achieve O(n), and keep answer to the return
        ListNode* end_tip = answer;

        // Run on the head Linked List
        while (head != NULL) {

            // If value is different from the last added to the end_tip, add it
            if (head->val != end_tip->val) {
                end_tip->next = new ListNode(head->val);
                end_tip = end_tip->next;
            }

            // Next head position
            head = head->next;
        }

        return answer;
    }
};
