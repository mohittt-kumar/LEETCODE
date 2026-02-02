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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
         vector<int> res;
        for(int i=0;i<lists.size();i++){
            ListNode * Head=lists[i];
            while(Head!=NULL){
                res.push_back(Head->val);
                Head=Head->next;
            }
        }
        if(res.empty())return nullptr;

        sort(res.begin(),res.end());

        ////again convert vector into linked list;
        ListNode *node=new ListNode(res[0]);
        ListNode* current=node;
        for(int i=1;i<res.size();i++){
            current->next=new ListNode(res[i]);
            current=current->next;
        }
        return node;
    }
};
