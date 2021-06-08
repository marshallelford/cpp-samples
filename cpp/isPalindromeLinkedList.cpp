/* 
 *
 * Given the head of a singly linked list, return true if it is a palindrome.
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
    bool isPalindrome(ListNode* head) {
        stack<int> stack;
        ListNode* runner = head;
        
        while (runner != NULL && runner->next != NULL) {
            runner = runner->next->next;
            stack.push(head->val);
            head = head->next;
        }
        
        if (runner != NULL) head = head->next;
        
        while (head != NULL) {
            if (stack.top() != head->val) return false;
            stack.pop();
            head = head->next;
        }
        
        return true;
    }
};