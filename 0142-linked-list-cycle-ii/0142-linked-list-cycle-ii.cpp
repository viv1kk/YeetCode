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
    ListNode *detectCycle(ListNode *head) {
        ListNode *ans = NULL;
        ListNode *slow = head;
        ListNode *fast = head;
        
        while(fast)
        {
            slow  = slow->next;
            if(fast->next == NULL)break;
            fast = (fast->next)->next;
            
            if(slow == fast)
            {
                slow = head;
                while(slow != fast)
                {
                    slow = slow->next;
                    fast = fast->next;
                }
                ans = slow;
                break;    
            }
        }
        return ans;
    }
};