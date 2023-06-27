// Problem Link - https://leetcode.com/problems/add-two-numbers-ii/description/
class Solution {
public:
    ListNode* add(ListNode* l1,ListNode* l2){
        ListNode* ansHead = new ListNode(0);
        ListNode* temp = ansHead;
        int carry = 0;
        while (l1 || l2 || carry){
            int sum = 0;
            if (l1){
                sum += l1-> val;
                l1 = l1-> next;
            }
            if (l2){
                sum += l2-> val;
                l2 = l2-> next;
            }
            sum += carry;
            carry = sum / 10;
            ListNode* n = new ListNode(sum%10);
            temp-> next = n;
            temp = temp-> next;
        }
        return ansHead-> next;
    }
    ListNode* reverse(ListNode* head){
        ListNode* curr = head;
        ListNode* prev = nullptr;
        while (curr){
            ListNode* next = curr-> next;
            curr-> next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1 = reverse(l1);
        l2 = reverse(l2);

        ListNode* ansHead = add(l1,l2);

        return reverse(ansHead);
    }
};
