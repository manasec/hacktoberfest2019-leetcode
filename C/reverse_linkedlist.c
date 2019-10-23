//* function to reverse singly linked list in a single traversal using 3 pointers




#include <stdio.h>
#include <stdlib.h>




struct ListNode* reverseList(struct ListNode* head)
{
    struct ListNode* current = head;
    struct ListNode* next = NULL;
    struct ListNode* prev = NULL;
    while(current != NULL)
    {
        next = current -> next;
        current -> next = prev;
        prev = current;
        current = next;
    }
    head = prev;
    return head;
}
