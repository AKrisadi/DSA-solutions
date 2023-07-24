// Problem Link - https://www.codingninjas.com/studio/problems/queue-using-array-or-singly-linked-list_2099908
#include <bits/stdc++.h> 
class Queue {
    int* arr;
    int head;
    int rear;
public:
    Queue() {
        // Implement the Constructor
        arr = new int[5001];
        head = -1;
        rear = -1;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Implement the isEmpty() function
        return head == -1;
    }

    void enqueue(int data) {
        // Implement the enqueue() function
        if (head == -1){
            head = 0;
            rear = 0;
            arr[rear] = data;
            return;
        }
        rear++;
        arr[rear] = data;
    }

    int dequeue() {
        // Implement the dequeue() function
        if (head == -1) return -1;
        int ans = arr[head];
        if (head == rear){
            head = -1;
            rear = -1;
        }
        else {
            head ++;
        }
        return ans;
    }

    int front() {
        // Implement the front() function
        if (head == -1) return -1;
        else return arr[head];
    }
};
