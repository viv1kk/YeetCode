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
    
    ListNode* h = NULL, *t = NULL;
    Solution(ListNode* head) {
        h = head;
    }
    
    int getRandom() {
        ListNode* x = h;
        
        int v = 0;
        int count = 1;
        while(x)
        {
            if(rand()%count == 0)
            {
                v = x->val;
            }
            count++;
            x = x->next;
        }
        return v;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */