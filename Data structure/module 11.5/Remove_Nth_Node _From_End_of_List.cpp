/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(0); // Dummy node to handle edge cases
        dummy->next = head;
        
        ListNode* first = dummy;
        ListNode* second = dummy;
        
        // Move the second pointer n positions ahead
        for (int i = 0; i <= n; i++) {
            second = second->next;
        }
        
        // Move both pointers simultaneously until the second pointer reaches the last node
        while (second) {
            first = first->next;
            second = second->next;
        }
        
        // Remove the nth node by adjusting the links
        first->next = first->next->next;
        
        return dummy->next; // Return the head of the modified list (excluding the dummy node)
    }
};
