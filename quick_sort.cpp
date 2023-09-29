#include <bits/stdc++.h> 
int partitionIndex (vector<int> &arr,int low,int high){
    int element = arr[low];
    int i = low, j = high;
    while (i<j){
        while (i<=high-1 && arr[i] <= element) i++;
        while (j>=low+1 && arr[j] > element) j--;
        if (i<j) swap (arr[i],arr[j]);
    }
    swap (arr[low],arr[j]);
    return j;
}
void quickSortalgo (vector<int> &arr,int low,int high){
    if (low < high) {
        int pIndex = partitionIndex (arr,low,high);

        quickSortalgo (arr,low,pIndex - 1);
        quickSortalgo (arr,pIndex+1,high);
    }
}
vector<int> quickSort(vector<int> arr)
{
    // divide and conquer algo 
    // first get a partition index
    // then call the same function for partion - 1 and +1
    quickSortalgo (arr,0,arr.size()-1);
    return arr;
}
