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
        ListNode* s = head;
        ListNode* f = head;
        
        if(head == NULL || head->next == NULL )
            return false;
        
        while(f != NULL)
        {
            s = s->next;
            f = (f->next != NULL)?(f->next)->next : f->next;
            
            if(s == f)
                return true;
        }
        return false;
    }
};