int binarySearch(int *input, int n, int val)
{
    //Write your code here
    int l = 0;
    int h = n;

    while (l <= h) {
        int mid  = l + (h - l ) / 2;
        if (input[mid] == val) return mid;
        else if (input[mid] > val) {
            h = mid - 1;
        }
        else l = mid + 1;
    }
    return -1;
}
