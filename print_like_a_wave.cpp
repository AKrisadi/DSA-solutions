//Problem Link - https://www.codingninjas.com/studio/problems/print-like-a-wave_893268
#include <bits/stdc++.h> 
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    //Write your code here
    vector<int> ans;
    // for every odd column print bottom to top
    // for every even column print top to bottom

    for (int col = 0;col < mCols;col++) {
        if ((col % 2) == 0) {
            for (int i = 0 ; i<nRows;i++) {
                ans.push_back(arr[i][col]);   
            }
        }
        else {
            for (int i = nRows-1;i>=0;i--) {
                ans.push_back(arr[i][col]);
            }
        }
    }
    return ans;
}
