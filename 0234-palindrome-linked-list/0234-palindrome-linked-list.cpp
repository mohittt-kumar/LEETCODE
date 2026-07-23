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
    ListNode* reverse(ListNode* head){
        ListNode * temp=head;
        ListNode * prev=NULL;
        while(temp){
            ListNode * next=temp->next;
            temp->next=prev;
            prev=temp;
            temp=next;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        ListNode * slow=head;
        ListNode * fast=head;

        while(fast->next && fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode *second=reverse(slow->next);

        ListNode * temp=head;
        ListNode * temp1=second;

        while(temp && temp1){
            if(temp->val!=temp1->val){
                return false;
            }else{
                temp=temp->next;
                temp1=temp1->next;
            }
        }return true;
    }
};