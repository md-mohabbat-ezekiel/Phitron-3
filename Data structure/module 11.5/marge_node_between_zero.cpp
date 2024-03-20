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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* dummy = new ListNode(0); // Dummy node to store the modified list
        ListNode* current = dummy; // Pointer to the current node in the modified list
        
        ListNode* node = head; // Pointer to traverse the original list
        int sum = 0; // Variable to store the sum of merged nodes
        
        while (node) {
            if (node->val != 0) {
                sum += node->val; // Add the node value to the sum
            } else {
                if (sum != 0) {
                    // Create a new node with the merged value and attach it to the modified list
                    current->next = new ListNode(sum);
                    current = current->next;
                    sum = 0; // Reset the sum for the next merge
                }
            }
            
            node = node->next; // Move to the next node in the original list
        }
        
        // Check if there are any remaining merged nodes at the end
        if (sum != 0) {
            current->next = new ListNode(sum);
        }
        
        return dummy->next; // Return the head of the modified list (excluding the dummy node)
    }
};
