#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

 bool hasCycle(struct ListNode *head) {
    struct ListNode *slow = head;
    struct ListNode *fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
            return true;
    }

    return false;
}

// two pointer method for finding loop in linklist (leet code function )