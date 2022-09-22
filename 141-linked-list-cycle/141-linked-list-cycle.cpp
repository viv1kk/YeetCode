/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL || head->next == NULL)
            return false;
        
        ListNode*s = head, *f = head;
        while(f != NULL)
        {
            s = s->next;
            f = (f->next)?(f->next)->next:f->next;
            if(s == f)
                return true;
        }
        return false;
    }
};