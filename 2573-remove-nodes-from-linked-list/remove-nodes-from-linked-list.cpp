class Solution {
public:
    ListNode* removeNodes(ListNode* head) {

        // Step 1: Reverse the list
        ListNode* prev = NULL;
        ListNode* curr = head;

        while (curr != NULL) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        head = prev;

        // Step 2: Remove nodes smaller than maximum
        int maxVal = head->val;
        curr = head;

        while (curr != NULL && curr->next != NULL) {

            if (curr->next->val < maxVal) {
                curr->next = curr->next->next;
            } 
            else {
                curr = curr->next;
                maxVal = curr->val;
            }
        }

        // Step 3: Reverse again
        prev = NULL;
        curr = head;

        while (curr != NULL) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        return prev;
    }
};