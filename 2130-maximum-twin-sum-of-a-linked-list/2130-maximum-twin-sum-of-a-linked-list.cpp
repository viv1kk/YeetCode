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
    int pairSum(ListNode* head) {
        ListNode* mid = head, *fast = head;
        
        stack<int>stk;
        while(fast->next->next != NULL)
        {
            stk.push(mid->val);
            mid = mid->next;
            fast = fast->next->next;
        }
        stk.push(mid->val);
        mid =  mid->next;
        
        int ans = 0;
        while(mid != NULL)
        {
            ans = max(ans, stk.top()+mid->val);
            stk.pop();
            mid = mid->next;
        }
        return ans;
    }
};