/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void f(ListNode* head, int n, int curr, ListNode* prev){
        if(!head) return;
        if(n == curr)
        {
            prev->next = head->next;
            return;
        }
        f(head->next, n, curr-1, head);
    }
    
    
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* h = new ListNode();
        h->next=head;
        int tot = 0;
        ListNode* t =head;
        
        while(t){ t = t->next; tot++; } 
        
        f(head, n, tot, h);
        return h->next;
    }
};