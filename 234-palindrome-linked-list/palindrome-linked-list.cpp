class Solution {
public:
    bool isPalindrome(ListNode* head) {
        string s = "";

        ListNode* temp = head;

        while (temp != NULL) {
            s += to_string(temp->val);
            temp = temp->next;
        }

        string b = s;
        reverse(b.begin(), b.end());

        return s == b;
    }
};