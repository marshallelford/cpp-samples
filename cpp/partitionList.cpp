/* 
 *
 * Given the head of a linked list and a value x, partition it such that all 
 * nodes less than x come before nodes greater than or equal to x.
 * 
 * You should preserve the original relative order of the nodes in each of the 
 * two partitions.
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
    ListNode* partition(ListNode* head, int x) {
        ListNode* lessThan = new ListNode();
        ListNode* lessThanCurr = lessThan;
        ListNode* greaterThan = new ListNode();
        ListNode* greaterThanCurr = greaterThan;
        ListNode* curr = head;
        
        while (curr != NULL) {
            if (curr->val < x) {
                lessThanCurr->next = curr;
                lessThanCurr = lessThanCurr->next;
            } else {
                greaterThanCurr->next = curr;
                greaterThanCurr = greaterThanCurr->next;
            }
            curr = curr->next;
        }
        
        greaterThanCurr->next = NULL;
        
        // make the new list
        lessThanCurr->next = greaterThan->next;
        
        return lessThan->next;
    }
};