// Problem Link - https://www.codingninjas.com/studio/problems/palindrom-linked-list_799352
bool check (LinkedListNode<int> *head1,LinkedListNode<int> *head2){
    //if (head1 == NULL) return false;
    //if (head2 == NULL) return false;

    while (head2){
        if (head1->data != head2->data){
            return false;
        }
        head1 = head1->next;
        head2 = head2->next;
    }

    return true;
}
bool isPalindrome(LinkedListNode<int> *head) {
    // Write your code here.
    // step 1 - find the mid of the node
    // step 2 - split nodes in two halves
    // reverse the second lined list
    // now read through both the halves

    //LinkedListNode<int> *temp = head;
    if (head == NULL) return true;
    LinkedListNode<int> *slow = head;
    LinkedListNode<int> *fast = head;

    while (fast && fast->next){
        slow = slow-> next;
        fast = fast-> next-> next;
    }

    // now slow is pointing to middle

    LinkedListNode<int> *head2 = slow->next;
    LinkedListNode<int> *prev = slow;
    slow->next = NULL;

    
    LinkedListNode<int> *curr = head2;

    while (curr){
        LinkedListNode<int> *next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    return check(head,prev);

}
