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
    ListNode* reverseList(ListNode* head) {
        //so to solve this problem first we need to extract all the eleemnts from the linkedlist after that again store ball those in the linkedlist
        ListNode* temp=head;
        vector<int>ans;
        while(temp) {
            ans.push_back(temp->val);
            temp=temp->next;
        }
        int index=ans.size()-1;
        temp=head;
        while(temp) {
            temp->val=ans[index];
            index--;
            temp=temp->next;
        }
        return head;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna