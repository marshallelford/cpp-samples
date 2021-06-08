/* 
 *
 * Given the head of a sorted linked list, delete all duplicates such that 
 * each element appears only once. Return the linked list sorted as well.
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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* current = head;
        while (current != NULL && current->next != NULL) {
            if (current->next->val == current->val) {
                current->next = current->next->next;
            } else {
                current = current->next;
            }
        }
            return head;
        }
};