/* 
 *
 * You are given two non-empty linked lists representing two non-negative integers. 
 * The digits are stored in reverse order, and each of their nodes contains a single digit. 
 * Add the two numbers and return the sum as a linked list.
 * 
 * Assume the two numbers do not contain any leading zero, except the number 0 itself.
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans = new ListNode();
        ListNode* ansHead = ans;
        int n = 0;
        int r = 0;
        
        while (l1 != NULL && l2 != NULL) {
            n = l1->val + l2->val + r;
            r = 0;
            
            if (n > 9) {
                r = 1;
                n %= 10;
            }
            
            ans->next = new ListNode(n);
            ans = ans->next;
            l1 = l1->next;
            l2 = l2->next;
        }
        
        while (l1 != NULL) {
            if (l1->val + r > 9) {
                ans->next = new ListNode(0);
            } else {
                ans->next = new ListNode(l1->val + r);
                r = 0;
            }
            ans = ans->next;
            l1 = l1->next;
        }
        
        while (l2 != NULL) {
            if (l2->val + r > 9) {
                ans->next = new ListNode(0);
            } else {
                ans->next = new ListNode(l2->val + r);
                r = 0;
            }
            ans = ans->next;
            l2 = l2->next;
        }
        
        if (r) ans->next = new ListNode(r);
        return ansHead->next;
    }
};