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
    ListNode* rotateRight(ListNode* head, int k) {
     int n=0;
        ListNode* temp=head;
        if(!head || !head->next){
            return head;
        }
        while(temp){
            n++;
            temp=temp->next;
        }
        if(n){
            k=k%n;
        }
        if(!k){
            return head;
        }
        temp=head;
        for(int i=0;i<n-k-1;i++){
            temp=temp->next;
        }
        ListNode* newend=temp;
        temp=temp->next;
        ListNode* Newnext=temp;
        newend->next=NULL;
        while(temp->next){
            temp=temp=temp->next;
        }
        temp->next=head;
        return Newnext;
        
    }
};
