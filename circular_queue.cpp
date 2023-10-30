// Problem Link - https://www.codingninjas.com/studio/problems/circular-queue_1170058
#include <bits/stdc++.h> 
class CircularQueue{
    int front;
    int rear;
    int size;
    int *arr;
    public:
    // Initialize your data structure.
    CircularQueue(int n){
        // Write your code here.
        size = n;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
    bool enqueue(int value){
        // if full
        if ( (front == 0 && rear == size - 1) || (rear == (front - 1) % (size - 1) ) )
            return false;
        // if first element
        else if (front == -1){
            front=rear=0;
        }
        // circular nature
        else if (rear == size-1 && front != 0) rear = 0;
        // normal enque
        else rear ++;
        arr[rear] = value;
        return true;
    }

    // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
    int dequeue(){
        // Write your code here.
        if (front == -1) return -1;
        int ans = arr[front];
        if (front == rear){
            front = rear = -1;
        }
        else if (front == size-1) front = 0;
        else front ++;
        return ans;
    }
};
