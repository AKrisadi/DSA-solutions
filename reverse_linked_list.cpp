//Problem Link - https://www.codingninjas.com/studio/problems/reverse-the-singly-linked-list_799897
#include <bits/stdc++.h>

/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    LinkedListNode<int> *prev = NULL;
    LinkedListNode<int> *curr = head;
    
    while (curr != NULL){
        LinkedListNode<int> *nextptr = curr->next;
        curr-> next = prev;
        prev = curr;
        curr = nextptr;
    }
    return prev;
}
