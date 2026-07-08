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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int>ans;
        ListNode *first=head;
        while(first->next!=NULL){
            ListNode * temp=first->next;
                int val=first->val;
            while(temp){
                if(val<temp->val){
                    ans.push_back(temp->val);
                    first=first->next;
                    break;
                }else{
                    temp=temp->next;
                }
            }
            if(temp==NULL){
                ans.push_back(0);
                first=first->next;
            }
        }ans.push_back(0);
        return ans;
    }
};