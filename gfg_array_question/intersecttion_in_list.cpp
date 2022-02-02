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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *x=headA;
        ListNode *y=headB;
        unordered_set<ListNode*> vis;
        while(x!=y){
            if(x->next){
                x=x->next;
            }
            else{
                x=headB;
                if(vis.count(x)){
                    return NULL;
                }
                vis.insert(x);
            }
        if(y->next){
            y=y->next;
        }
        else{
            y=headA;
        }
        }
        return x;

        
    }
};
