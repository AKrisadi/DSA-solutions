// Problem Link - https://www.codingninjas.com/studio/problems/stack-implementation-using-array_3210209?leftPanelTab=0
#include <bits/stdc++.h> 
// Stack class.
class Stack {
    int capacity;
    int ind;
    int* arr;
public:
    
    Stack(int capacity) {
        // Write your code here.
        this-> capacity = capacity;
        ind = -1;
        arr = new int[capacity];
    }

    void push(int num) {
        // Write your code here.
        if (ind >= capacity - 1) return ;
        ind++;
        arr[ind] = num;
    }

    int pop() {
        // Write your code here.
        if (ind > -1){
            int val = arr[ind];
            ind --;
            return val;
        }
        return -1;
    }
    
    int top() {
        // Write your code here.
        if (ind > -1)
        return arr[ind];
        return -1;
    }
    
    int isEmpty() {
        // Write your code here.
        return ind==-1;
    }
    
    int isFull() {
        // Write your code here.
        return ind==capacity-1;
    }
    
};
