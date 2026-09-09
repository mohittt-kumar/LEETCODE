class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int sum = 0;

        ListNode* curr = head;

        while (curr) {
            sum = sum * 2 + curr->val;
            curr = curr->next;
        }

        return sum;
    }
};