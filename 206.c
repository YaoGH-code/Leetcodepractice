/*Author: Yao Xu
*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* reverseList(struct ListNode* head){
    struct ListNode* last  = NULL;
    struct ListNode* current = head;
    struct ListNode* nxt;

    while (current != NULL){
        nxt = current -> next;
        current -> next = last;
        last = current;
        current = nxt;
    }
    return last;
}