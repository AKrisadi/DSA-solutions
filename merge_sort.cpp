// Problem Link - https://www.codingninjas.com/studio/problems/merge-sort_920442
void merge (vector <int> &arr, int low, int mid, int high) {
    vector<int> ans;
    int left = low , right = mid + 1;
    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            ans.push_back(arr[left]);
            left++;
        }
        else {
            ans.push_back(arr[right]);
            right++;
        }
    }
    while (left <= mid) {
        ans.push_back(arr[left]);
        left++;
    }
    while (right <= high) {
        ans.push_back(arr[right]);
        right++;
    }
    for (int i=low;i<=high;i++){
        arr[i] = ans[i-low];
    }
}
void divide(vector<int> &arr,int low,int high) {
    if (low >= high) return ;

    int mid  =  (low + high) / 2;

    divide(arr, low , mid);
    divide(arr, mid+1, high);

    merge (arr, low , mid , high);
}
void mergeSort(vector < int > & arr, int n) {
    // Write your code here.
    divide(arr,0,n-1);
}
