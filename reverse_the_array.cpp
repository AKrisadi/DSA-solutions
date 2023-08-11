// Problem Link - https://www.codingninjas.com/studio/guided-paths/basics-of-c/content/118787/offering/1381278
#include <iostream>
using namespace std;
void reverseArray(int arr[], int n){
    int s = 0, e = n - 1;
    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}
int main() {
    //Write your code here
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    reverseArray(a, n);
    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }
    return 0;
}
