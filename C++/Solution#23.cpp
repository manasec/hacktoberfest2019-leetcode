// 23. Merge k Sorted Lists

/*
    Merge k sorted linked lists and return it as one sorted list. Analyze and describe its complexity.

    Example:

    Input:
    [
      1->4->5,
      1->3->4,
      2->6
    ]
    Output: 1->1->2->3->4->4->5->6
*/

/**
 * Definition for singly-linked list.
 * struct ListNode
 * {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

// Solution:
//   Using a MinHeap Structure to order pairs
//
//   From each list, grab a pair and push it to the MinHeap
//
//   The first element of the pair is the val attribute from the lists
//   The second element of the pair is the list where this val came from
//
//   While the MinHeap contains any element, remove the minimum and add another
//   one, until you read all Linked List from lists


class Solution
{
public:
    ListNode* mergeKLists(vector<ListNode*>& lists)
    {
        // Creating answer with one element that will be removed at the final
        // this way we don't have to worry about NULL results
        ListNode* answer  = new ListNode(0);

        // Necessary to make additions in O(1), so we end with O(n) complexity
        // for this solution
        ListNode* end_tip = answer;

        // Declare our MinHeap
        // The additional 2 template arguments are just to turn the MaxHeap to
        // an MinHeap
        priority_queue<pair<int , int> , vector<pair<int , int>> , greater<pair<int , int>>> heap;
        
        // For each Linked List, if not null, grab the first element
        for (size_t i = 0; i < lists.size(); ++i) {
            if (lists[i] != NULL) {
                heap.push({lists[i]->val , i});
            }
        }

        // While the MinHeap isn't empty
        while (!heap.empty())
        {
            // The top element value
            auto val   = heap.top().first;
            // The top element index that indicates from where Linked List it came from
            auto index = heap.top().second;

            // Remove the top element from the MinHeap
            heap.pop();

            // Add the value to the end_tip of our answer
            end_tip->next = new ListNode(val);
            end_tip = end_tip->next;

            // Skip element from the Linked List where we read it from, using the index reference
            lists[index] = lists[index]->next;

            // If the element on this list is not empty, insert it's candidate to our heap
            if (lists[index]) {
                heap.push({lists[index]->val , index});
            }
        }

        // Free the first node, because we did a little hack at the beginning of this function
        ListNode* node_to_free = answer; // Get the first
        answer = answer->next; // Go to the second

        delete node_to_free; // Free the first
        return answer; // Return
    }
};
