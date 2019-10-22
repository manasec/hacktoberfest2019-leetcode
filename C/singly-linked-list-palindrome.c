/**
Program to check if a singly linked list is a palindrome or not
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

#include<stdio.h>
#include<stdlib.h>


bool isPalindrome(struct ListNode* head)
{
 int *s;
 int i = 0;
 int j = 0;
 struct ListNode *temp = head;
 s = (int*)malloc(sizeof(int)*100000);
 int top = -1;
 while(temp != NULL)
 {
   top++;
   s[top] = temp -> val;
   temp = temp -> next;
   i++;


 }
    temp = head;
    while( top != -1)
    {
        if(s[top] == temp -> val )
        {
            j++;
        }
        top--;
        temp = temp -> next;
    }
    if (i==j)
        return true;
    else
        return false;


}





