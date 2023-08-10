// Problem Link - https://www.codingninjas.com/studio/guided-paths/basics-of-c/content/118787/offering/1381276?leftPanelTab=0
#include <iostream>
using namespace std;
void firstIndex(int arr[], int n, int x) {
    int first = -1;
    for (int i = 0; i < n; i++) {
        if (x == arr[i]) {
            first = i;
            break;
        }
    }
    cout << first;
}
int main() {
    //Write your code here
     int n; //no. of elements
    cin >> n;
    int arr[n];
    //initializing array elements
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int x; //element whose index to be searched
    cin >> x;
    firstIndex(arr, n, x);
    
    return 0;
}
