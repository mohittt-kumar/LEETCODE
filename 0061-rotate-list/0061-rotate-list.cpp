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
    ListNode * reverse(ListNode *head){
        ListNode* curr=head;
        ListNode* prev=NULL;
        while(curr){
            ListNode* temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        return prev;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next == NULL || k == 0)
        return head;
        ListNode * temp=head;
        int n=0;
        while(temp){
            n++;
            temp=temp->next;
        }
        ListNode * curr=head;
        ListNode * prev=NULL;
        k=k%n;
        int count=n-k;
        while(count>0){
            prev=curr;
            curr=curr->next;
            count--;
        }
        prev->next=NULL;
        temp=head;
        temp=reverse(temp);
        curr=reverse(curr);

        head=temp;

        while(temp->next){
            temp=temp->next;
        }

        temp->next=curr;


        return reverse(head);
    }

};