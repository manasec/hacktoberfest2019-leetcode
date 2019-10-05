class Solution:
    def middleNode(self, head: ListNode) -> ListNode:
        aux = head
        cont = 0
        jump = 0
        while aux:
            cont += 1
            aux = aux.next

        while jump < cont // 2:
            jump += 1
            head = head.next

        return head
