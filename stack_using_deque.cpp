// Problem Link - https://www.codingninjas.com/studio/problems/stack-using-queue_795152?leftPanelTab=0
class Stack {
	// Define the data members.
    queue<int> q1;
    queue<int> q2;
   public:
    Stack() {
        // Implement the Constructor.
    }

    /*----------------- Public Functions of Stack -----------------*/

    int getSize() {
        // Implement the getSize() function.
        return q1.size();
    }

    bool isEmpty() {
        // Implement the isEmpty() function.
        return q1.empty();
    }

    void push(int element) {
        // Implement the push() function.
        if(q1.empty()) {
            q1.push(element);
            return;
        }
        int size = q1.size();
        for (int i=0;i<size;i++){
            int val = q1.front();
            q1.pop();
            q2.push(val);
        }
        q1.push(element);
        for (int i=0;i<size;i++){
            int val = q2.front();
            q2.pop();
            q1.push(val);
        }
    }

    int pop() {
        // Implement the pop() function.
        if (q1.empty()) return -1;
        else{
            int ans = q1.front();
            q1.pop();
            return ans;
        }
    }

    int top() {
        // Implement the top() function.
        if (q1.empty()) return -1;
        else return q1.front();
    }
};
