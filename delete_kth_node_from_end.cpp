// Problem Link - https://www.codingninjas.com/studio/problems/delete-kth-node-from-end-in-linked-list_799912?leftPanelTab=0
Node* removeKthNode(Node* head, int K)
{
    // Write your code here.
      Node* fast = head;

    Node* slow = head;

 

    while(K--) {

        fast = fast->next;

    }

 

    //edge case

    if(fast == NULL) {

        return slow->next;

    }

 

    while(fast && fast->next) {

        slow = slow->next;

        fast = fast->next;

    }

 

    slow->next = slow->next->next;

    return head;
