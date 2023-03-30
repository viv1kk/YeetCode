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
    void f(ListNode* head, int n, int &curr, ListNode* prev){
        if(!head) return;
        f(head->next, n, curr, head);
        curr++;
        if(n == curr){
            prev->next = head->next;
            return;
        }
    }
    
    
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* h = new ListNode();
        h->next=head;
        ListNode* t =head;      
        int tot = 0;
        f(head, n, tot, h);
        return h->next;
    }
};