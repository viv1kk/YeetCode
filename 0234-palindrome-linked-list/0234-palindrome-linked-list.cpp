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
    
    ListNode* reverse(ListNode* head)
    {
        ListNode* d = NULL;
        
        while(head)
        {
            ListNode* temp = head->next;
            head->next = d;
            d= head;
            head = temp;
        }
        return d;
    }
    
    
    bool isPalindrome(ListNode* head) {
        if(!head) return false;
        ListNode* slow = head;
        ListNode* fast = head;
        
        while(fast != NULL)
        {
            fast = fast->next;
            if(fast) fast = fast->next;
            else break;
            slow = slow->next;
        }
        // cout<<slow->val;
        slow=reverse(slow);
        // slow = slow->next;
        while(slow)
        {
            if(slow->val != head->val)
                return false;
            slow = slow->next;
            head = head->next;
        }
        return true;
    }
};