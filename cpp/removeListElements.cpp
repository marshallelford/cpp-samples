/* 
 *
 * Given the head of a linked list and an integer val, remove all the nodes 
 * of the linked list that has Node.val == val, and return the new head.
 *
 *
 * Definition for singly-linked list:
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 * 
 */

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        while (head != NULL && head->val == val) head = head->next;
        
        ListNode* prev = NULL;
        ListNode* node = head;
        
        while (node != NULL) {
            if (node->val == val) {
                prev->next = node->next;
            } else {
                prev = node;
            }
            
            node = node->next;
        }
        
        return head;
    }
};