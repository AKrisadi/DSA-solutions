//https://leetcode.com/problems/remove-linked-list-elements/description/
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* dummyNode = new ListNode(-1);
        dummyNode-> next = head;
        ListNode* temp = dummyNode;
        while (temp-> next != NULL){
            if(temp-> next-> val == val){
                temp -> next = temp-> next-> next;
            }
            else temp = temp-> next;
        }

        return dummyNode-> next;
    }
};
