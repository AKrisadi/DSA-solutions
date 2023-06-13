Node *insertAtHead(Node *head, int val) {
    Node *node = new Node(val);
    node->next = head;
    
    if(head != NULL)
        head->prev = node;
    
    head = node;
    
    return head;
}

Node* insert(int k, int val, Node *head) {
    if(head == NULL || k == 0) {
        Node *flag = insertAtHead(head, val);
        return flag;
    }
    
    Node *newNode = new Node(val);
    Node *temp = head;
    
    int count = 1;
    
    while(count != k) {
        temp = temp->next;
        count++;
    }
    
    newNode->next = temp->next;
    newNode->prev = temp;
    temp->next = newNode;
    
    return head;
}
