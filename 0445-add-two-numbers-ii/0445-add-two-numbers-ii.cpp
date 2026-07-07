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
    ListNode * reverse(ListNode* head){
        ListNode * prev=NULL;
        ListNode* curr=head;
        while(curr){
            ListNode* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }return prev;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1=reverse(l1);
        l2=reverse(l2);
        ListNode *newNode=new ListNode(0);
        ListNode* current=newNode;

        int carry=0;
        while(l1 || l2|| carry){
            int x=(l1!=NULL)?l1->val:0;
            int y=(l2!=NULL)?l2->val:0;

            int sum=x+y+carry;
            carry=sum/10;

            current->next=new ListNode(sum%10);
            current= current->next;

            if(l1!=NULL)l1=l1->next;
            if(l2!=NULL)l2=l2->next;
        }
        ListNode* ans=reverse(newNode->next);

        while(ans && ans->val==0 && ans->next){
            ans=ans->next;
        }

        return ans;
    }
};