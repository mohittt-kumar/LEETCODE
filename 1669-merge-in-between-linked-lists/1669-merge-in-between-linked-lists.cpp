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
        ListNode* curr=list1;
        int first=a;
        first--;
        while(first--){
            curr=curr->next;
        }
        ListNode * temp=curr->next;
        curr->next=list2;
        int step=b-a;
        while(step){
            temp=temp->next;
            step--;
        }
        while(curr->next){
            curr=curr->next;
        }
        curr->next=temp->next;
        temp->next=NULL;
        return list1;


    }
};