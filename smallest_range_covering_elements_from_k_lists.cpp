
class node{
    public:
    int data;
    int row;
    int col;
    node(int d,int r,int c){
        data = d;
        row = r;
        col = c;
    }
};
class compare{
    public:
    bool operator()(node *a,node *b){
        return a->data > b-> data;
    }
};
class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        int k = nums.size();
        // get a min heap and push first element of each row in min-heap
        int maxi = INT_MIN;
        int mini = INT_MAX;
        priority_queue <node*, vector<node*>, compare> minHeap;
        for (int i=0;i<k;i++){
            int row = i;
            int col = 0;
            int data = nums[row][col];
            maxi = max(maxi,data);
            mini = min(mini,data);
            node* n = new node(data,row,col);
            minHeap.push(n);
        }

        int ansStart = mini, ansEnd = maxi;
        // now unless the minHeap gets empty take out minimum element and do processing
        while (!minHeap.empty()){
            node* temp = minHeap.top();
            minHeap.pop();
            int element = temp-> data;
            int row = temp-> row;
            int col = temp-> col;
            mini = element;
            int tempAns = maxi - mini;
            int ans = ansEnd - ansStart;
            if (tempAns < ans){
                ansStart = mini;
                ansEnd = maxi;
            }

            if (col + 1 < nums[row].size()){
                int d = nums[row][col+1];
                int r = row;
                int c = col + 1;
                node* temp1 = new node(d,r,c);
                maxi = max(maxi,d);
                minHeap.push(temp1);
            }
            else break;
        }

        // return the final ans stored in ansStart and ansEnd
        vector<int> ans;
        ans.push_back(ansStart);
        ans.push_back(ansEnd);
        return ans;
    }
};

