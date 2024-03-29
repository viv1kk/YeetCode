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
    
    void f(ListNode* head){
        if(!head || !head->next ||!head->next->next) return;
        ListNode *temp = head->next;
        head->next = temp->next;
        temp->next = head->next->next;
        head->next->next = temp;
        if(!head->next) return;
        
        f(head->next->next);
    }
    
    ListNode* swapPairs(ListNode* head) {
        ListNode* d = new ListNode();
        d->next = head;
        f(d);
        return d->next;
    }
};