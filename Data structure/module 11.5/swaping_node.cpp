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
    ListNode* swapNodes(ListNode* head, int k) {
        // Step 1: Traverse the linked list to find the length
        int length = 0;
        ListNode* currentNode = head;
        while (currentNode) {
            length++;
            currentNode = currentNode->next;
        }
        
        // Step 2: Calculate the position of the kth node from the end
        int positionFromEnd = length - k;
        
        // Step 3: Traverse the list again and swap the values
        ListNode* firstNode = nullptr;
        ListNode* secondNode = nullptr;
        ListNode* temp = head;
        for (int i = 1; i <= length; i++) {
            if (i == k) {
                firstNode = temp;
            }
            if (i == positionFromEnd + 1) {
                secondNode = temp;
            }
            temp = temp->next;
        }
        
        // Swap the values
        int tempVal = firstNode->val;
        firstNode->val = secondNode->val;
        secondNode->val = tempVal;
        
        return head;
    }
};
