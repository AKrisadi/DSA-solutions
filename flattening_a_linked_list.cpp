// Problem Link - https://practice.geeksforgeeks.org/problems/da62a798bca208c7a678c133569c3dc7f5b73500/1?page=4&category[]=Linked%20List&sortBy=difficulty
class Solution {
public:
    Node* mergeTwo(Node* head1,Node* head2){
        if (head1 == NULL) return head2;
        if (head2 == NULL) return head1;
        
        Node* ansHead = new Node(0);
        Node* temp = ansHead;
        
        while (head1 && head2){
            if (head1-> data < head2-> data){
                temp-> bottom = head1;
                head1 = head1-> bottom;
            }
            else{
                temp-> bottom = head2;
                head2 = head2-> bottom;
            }
            temp = temp-> bottom;
        }
        if (head1) temp->bottom = head1;
        if (head2) temp-> bottom = head2;
        
        return ansHead-> bottom;
    }
    Node *flatten(Node *root)
    {
        // Your code here
        if (root == NULL || root-> next == NULL) return root;
        
        root-> next = flatten(root-> next);
        
        root = mergeTwo(root,root-> next);
        root-> next = NULL;
        
        return root;
    }
};
