class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {

        // Remove matching nodes from the beginning
        while (head != NULL && head->val == val) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
        }

        // Remove matching nodes from the middle/end
        ListNode* temp = head;

        while (temp != NULL && temp->next != NULL) {

            if (temp->next->val == val) {
                ListNode* nodeToDelete = temp->next;
                temp->next = temp->next->next;
                delete nodeToDelete;
            }
            else {
                temp = temp->next;
            }
        }

        return head;
    }
};