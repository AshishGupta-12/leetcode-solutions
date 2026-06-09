/*
LeetCode 141 - Linked List Cycle

Approach:
Use Floyd's Cycle Detection Algorithm (Tortoise and Hare).

1. Slow pointer moves one step at a time.
2. Fast pointer moves two steps at a time.
3. If a cycle exists, the two pointers will eventually meet.
4. If the fast pointer reaches NULL, no cycle exists.

Time Complexity: O(n)
Space Complexity: O(1)
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast)
                return true;
        }

        return false;
    }
};
