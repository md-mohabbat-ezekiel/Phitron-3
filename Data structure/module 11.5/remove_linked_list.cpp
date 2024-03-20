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

ListNode* removeElements(ListNode* head, int val) {
    ListNode* dummy = new ListNode(0); // Dummy node to handle edge cases
    dummy->next = head;
    
    ListNode* prev = dummy;
    ListNode* current = head;
    
    while (current) {
        if (current->val == val) {
            prev->next = current->next;
        } else {
            prev = current;
        }
        
        current = current->next;
    }
    
    return dummy->next; // Return the head of the modified list (excluding the dummy node)
}
