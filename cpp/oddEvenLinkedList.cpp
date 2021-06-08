/* 
 *
 * Given the head of a singly linked list, group all the nodes with odd indices 
 * together followed by the nodes with even indices, and return the reordered list.
 * 
 * The first node is considered odd, and the second node is even, and so on.
 *
 *
 * Definition for singly-linked list.
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
    ListNode* oddEvenList(ListNode* head) {
        ListNode* odd = new ListNode();
        ListNode* even = new ListNode();
        ListNode* oddHead = odd;
        ListNode* evenHead = even;
        int count = 1;
        
        while (head != NULL) {
            if (count % 2 != 0) {
                // odd
                odd->next = new ListNode(head->val);
                odd = odd->next;
            } else {
                // even
                even->next = new ListNode(head->val);
                even = even->next;
            }
            head = head->next;
            count++;
        } 
        
        odd->next = evenHead->next;
        return oddHead->next;
    }
};