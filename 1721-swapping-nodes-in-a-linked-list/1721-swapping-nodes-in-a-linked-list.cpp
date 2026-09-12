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
    ListNode* swapNodes(ListNode* head, int k) {
        int count=1;
        ListNode* curr=head;
        while(curr->next){
            count++;
            curr=curr->next;
        }

        curr=head;
        int last = count-k+1;
        for(int i=1;i<k;i++){
            curr=curr->next;
        }
        ListNode* temp=head;
        for(int i=1;i<last;i++){
            temp=temp->next;
        }
        swap(curr->val,temp->val);

        return head;
    }
};