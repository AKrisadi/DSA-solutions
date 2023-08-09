// Problem Link - https://www.codingninjas.com/studio/problems/queue-using-stack_799482?leftPanelTab=1
class Queue {
    // Define the data members(if any) here.
    stack<int> s1;
    stack<int> s2;
    public:
    Queue() {
        // Initialize your data structure here.
    }

    void enQueue(int val) {
        // Implement the enqueue() function.
        if (s1.empty()){
            s1.push(val);
            return;
        }
        int size = s1.size();
        while (!s1.empty()){
            int val = s1.top();
            s1.pop();
            s2.push(val);
        }
        s1.push(val);
        while (!s2.empty()){
            int val = s2.top();
            s2.pop();
            s1.push(val);
        }
    }

    int deQueue() {
        // Implement the dequeue() function.
        if (s1.empty()) return -1;
        int ans = s1.top();
        s1.pop();
        return ans;
    }

    int peek() {
        // Implement the peek() function here.
        if (s1.empty()) return -1;
        return s1.top();
    }

    bool isEmpty() {
        // Implement the isEmpty() function here.
        return s1.empty();
    }
};
