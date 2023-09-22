class MedianFinder {
public:
    double median = 0;
    priority_queue<int> maxHeap;
    priority_queue<int, vector<int>, greater<int> > minHeap;
    int signum(int a,int b){
        if (a == b) return 0;
        if (a > b) return 1;
        else return -1;
    }
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        switch(signum(maxHeap.size(),minHeap.size() ) ) {
            case 0: 
            if (num > median){
                minHeap.push(num);
                median = minHeap.top();
            }
            else{
                maxHeap.push(num);
                median = maxHeap.top();
            }
            break;
            case 1:
            // size of maxHeap is greater than size of minHeap
            if (num > median){
                minHeap.push(num);
                median = (maxHeap.top() + minHeap.top()) / 2.0;
            }
            else{
                minHeap.push(maxHeap.top());
                maxHeap.pop();
                maxHeap.push(num);
                median = (maxHeap.top() + minHeap.top()) / 2.0;
            }
            break;
            case -1:
            // size of minHeap is greater than size of maxHeap
            if (num > median){
                maxHeap.push(minHeap.top());
                minHeap.pop();
                minHeap.push(num);
                median = (maxHeap.top() + minHeap.top()) / 2.0;
            }
            else{
                maxHeap.push(num);
                median = (maxHeap.top() + minHeap.top()) / 2.0;
            }
            break;
        }
    }
    
    double findMedian() {
        return median;
    }
};
