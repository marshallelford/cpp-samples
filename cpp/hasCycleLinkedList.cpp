/* 
 *
 * Given the head of a linked list, determine if the linked list has a cycle in it.
 *
 *
 * Definition for singly-linked list:
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 * 
 */

class Solution {
public:
    bool hasCycle(ListNode *head) {
        if (head == NULL) return false;
        
        ListNode* runner = head->next;
        while (runner != NULL && runner->next != NULL) {
            if (runner == head) return true;
            
            runner = runner->next->next;
            head = head->next;
        }
        
        return false;
    }
};