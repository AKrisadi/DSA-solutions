#include <bits/stdc++.h> 
/************************************************************

    Following is the linkedList class structure:

    class Node {
    public:
        int data;
        Node *next;

        Node(int val) {
            this->data = val;
            next = NULL;
        }
        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
};

************************************************************/

Node * insert(Node * head, int n, int pos, int val) {

    // Write your code here

    int cnt=1;

    if(head==NULL)

    {

        return new Node(val);

    }

    if(pos==0)

    {

        Node*temp=new Node(val);

        temp->next=head;

        return temp;

    }

    Node*temp=head;

    while(temp!=NULL)

    {

        if(cnt==pos)

        {

            Node*nptr=new Node(val);

            nptr->next=temp->next;

            temp->next=nptr;

            break;

        }

        cnt++;

        temp=temp->next;

    }

    return head;

}
