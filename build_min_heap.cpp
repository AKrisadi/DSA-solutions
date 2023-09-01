#include <bits/stdc++.h> 
void heapify(vector<int> &arr,int n,int ind){
    int smallest = ind;
    int lChild = 2*ind+1;
    int rChild = 2*ind+2;

    if (lChild < n && arr[lChild] < arr[smallest])
        smallest = lChild;

    if (rChild < n && arr[rChild] < arr[smallest])
        smallest = rChild;

    if (smallest != ind){
        swap(arr[ind],arr[smallest]);
        heapify(arr,n,smallest);
    }
}
vector<int> buildMinHeap(vector<int> &arr)
{
    // Write your code here
    int n = arr.size();
    int ind = n / 2 - 1;
    for (int i=ind;i>=0;i--)
        heapify(arr,n,i);
    return arr;
}
