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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        // Straightforward Method
        
        ListNode* m = new ListNode();
        ListNode* n = m;
        
        while(list1 != NULL && list2 != NULL)
        {
            if(list1->val <= list2->val)
            {
                m->next = list1;
                list1 = list1->next;
            }
            else
            {
                m ->next = list2;
                list2 = list2->next;
            }
            m = m->next;
        }
        if(list1) m->next = list1;
        if(list2) m->next = list2;
        return n->next;
        
        
        
        // By Splicing
//         if(list1 == NULL)
//             return list2;
//         if(list2 == NULL)
//             return list1;
        
//         if(list1->val <= list2->val)
//         {
//             list1->next = mergeTwoLists(list1->next, list2);
//             return list1;
//         }
//         else
//         {
//             list2->next = mergeTwoLists(list1, list2->next);
//                 return list2;
//         }
    }
};