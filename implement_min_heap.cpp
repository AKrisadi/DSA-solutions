int pop(vector<int> &heap)
{
    // Write you code here.
    if (heap.size() == 0) return -1;
    int ans = heap[0];
    int n = heap.size();
    swap(heap[0],heap[n-1]);
    int i = 0;
    heap.pop_back();
    n = heap.size();
    while (i < n ){
        int largest = i;
        int lChild = 2*i + 1;
        int rChild = 2*i + 2;
        if (lChild < n && heap[largest] < heap[lChild])
            largest = lChild;
        if (rChild < n && heap[largest] < heap[rChild])
            largest = rChild;
        if (largest != i){
            swap(heap[largest],heap[i]);
            i = largest;
        }
        else break;
    }
    
    return ans;
}

// Code Snippet of the push function: 
//
//     void push(vector<int> &heap, int x)
//     {
//           heap.push_back(x);
//
//            // Posistion of the current inserted element.
//            int pos=heap.size()-1;
//
//            // Shifting the element up until it reaches the top most node if it is larger than its parent.
//            while(pos>0)
//            {
//                int parent = (pos-1)/2;
//                if(heap[pos] > heap[parent])
//                {
//                    swap(heap[parent],heap[pos]);
//                    pos=parent;
//               }
//              else
//              {
//                  // As parent is larger the element now is in its correct position. 
//                  break;
//              }
//          }
//      }
