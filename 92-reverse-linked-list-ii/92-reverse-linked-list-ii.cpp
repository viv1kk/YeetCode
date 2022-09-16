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
    
    ListNode* reverseLinkedList(ListNode* &head, int right)
    {
        if(right == 0 || head == NULL|| head->next == NULL)
            return head;

        ListNode* h = reverseLinkedList(head->next, --right);   
        ListNode* temp = (head->next)->next;
        (head->next)->next = head;
        head->next = temp;
        
        return h;
    }
    
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left == right || head == NULL || head->next == NULL)
            return head;
        ListNode* h = head;
        
        if(left == 1)
            return reverseLinkedList(head, right-left);
        
        int l = left-1;
        while(--l)h = h->next;
        cout<<(h)->val;
        h->next = reverseLinkedList(h->next, right-left);

        return head;
    }
};