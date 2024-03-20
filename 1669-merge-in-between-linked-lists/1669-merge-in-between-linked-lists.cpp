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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode *s = list1;
        
        int i = 0;
        while(s && i < a-1){
            s = s->next;
            i++;
        }
        
        ListNode*t = s;
        while(t && t->next && i < b){
            ListNode *x = t->next;
            s->next = x->next;
            i++;
        }
        
        t = s->next;
        
        s->next = list2;
        while(list2->next){
            list2 = list2->next;
        }
        list2->next = t;
        return  list1;
    }
};