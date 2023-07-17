// Problem Link - https://www.codingninjas.com/studio/problems/middle-of-linked-list_973250
int getLength(Node* head){
    int len = 0;
    while (head != NULL){
        len++;
        head = head-> next;
    }
    return len;
}
Node *findMiddle(Node *head) {
    // Write your code here
    int len = getLength(head);
    int ans = (len/2);
    Node* temp = head;
    int cnt = 0;
    while (cnt < ans){
        temp = temp-> next;
        cnt++;
    }
    return temp;
}
