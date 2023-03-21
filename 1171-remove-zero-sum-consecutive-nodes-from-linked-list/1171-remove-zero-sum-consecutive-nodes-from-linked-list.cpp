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
    ListNode* removeZeroSumSublists(ListNode* head) {
        unordered_map<int, ListNode*>mp;
        ListNode* temp = head;
        int sum = 0;
        
        mp[0] = NULL;
        while(head)
        {
            sum += head->val;
            
            if(sum == 0){
                temp = head->next;
                mp.clear();
            }
            else{
                if(mp.find(sum) == mp.end()){
                    mp[sum] = head;
                }
                else
                {
                    ListNode* x = mp[sum]->next;
                    mp[sum]->next = head->next;
                    if(head->val != 0)
                    {
                        int sm = sum;
                        do{
                            sm += x->val;
                            mp.erase(sm);
                            x = x->next;
                        }while(x && sm+x->val != sum);
                    }
                }
            }
            head = head->next;
        }
        return temp;
    }
};