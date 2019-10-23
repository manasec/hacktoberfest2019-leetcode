//* function to find the middle element of a singly linked list in a single traversal




#include <stdio.h>
#include <stdlib.h>


struct ListNode* middleNode(struct ListNode* head)
{   struct ListNode* fast = head;
    struct ListNode* slow = head;


    if(head == NULL)
    {
       return;


    }

    while(  fast != NULL && fast -> next != NULL)
    {
        fast = fast -> next -> next;
        slow = slow -> next;
    }
    return slow;


}
