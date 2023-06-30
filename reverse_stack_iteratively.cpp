/*
Algo - 
Example - St = [ 1, 2, 3, 4] 
Step 1 - Copy elements from given stack to a temporary stack i.e., [4, 3, 2, 1]
Step 2 - Copy elements from first temporary stack to second temporary stack i.e., [1, 2, 3, 4]
Step 3 - Copy elements from second temporary stack to original given stack i.e., [4, 3, 2, 1] 
*/
void Reverse(stack<int> &St){
        stack<int> temp;
        while (not St.empty()){
            int d = St.top();
            St.pop();
            temp.push(d);
        }
        stack<int> temp2;
        while (not temp.empty()){
            int d = temp.top();
            temp.pop();
            temp2.push(d);
        }
        while (not temp2.empty()){
            int d = temp2.top();
            temp2.pop();
            St.push(d);
        }
    }
