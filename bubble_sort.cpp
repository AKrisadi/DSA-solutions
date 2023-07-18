// Problem Link - https://www.codingninjas.com/studio/problems/bubble-sort_980524
#include <bits/stdc++.h> 
void bubbleSort(vector<int>& arr, int n)
{   
    // Write your code here.
    for (int i  =  1; i < n ; i++ ) {
        bool swapped = false;
        for (int j = 0; j < n - i; j ++ ) {
            if (arr[j] > arr[j + 1] ) {
                swapped = true;
                swap (arr[j], arr[j + 1]);
            }

        }
        if (swapped == false) break;
    }
}
