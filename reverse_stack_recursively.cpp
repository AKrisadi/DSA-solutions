//Problem Link - https://www.codingninjas.com/studio/problems/reverse-stack-using-recursion_631875
void insertAtBottom(stack<int> &stack,int val){
    if (stack.empty()){
        stack.push(val);
        return;
    }
    int top = stack.top();
    stack.pop();
    insertAtBottom(stack, val);
    stack.push(top);
}
void reverseStack(stack<int> &stack) {
    // Write your code here
    if (stack.empty()) return;
    int top = stack.top();
    stack.pop();
    reverseStack(stack);
    insertAtBottom(stack,top);
}
