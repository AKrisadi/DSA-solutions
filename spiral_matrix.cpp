// Problem Link - https://www.codingninjas.com/studio/problems/spiral-matrix_840698
#include <bits/stdc++.h> 
vector<int> spiralPathMatrix(vector<vector<int>> matrix, int n, int m) 
{
    // Write your code here.
    vector<int> ans;

    int rows = n;
    int col = m;

    int left = 0, right = col - 1;
    int top = 0, bottom = rows - 1;

    while (left <= right && top <= bottom) {

        for (int i = left ; i<=right; i++)
        ans.push_back(matrix [top][i]);
        top++;

        for (int i = top ; i<=bottom; i++)
        ans.push_back(matrix [i][right]);
        right--;

        if (top <= bottom) {
            for (int i = right; i>=left; i--)
            ans.push_back(matrix [bottom][i]);
            bottom--;
        }

        if (left <= right) {
            for (int i = bottom; i>=top ; i--)
            ans.push_back (matrix [i][left]);
            left++;
        }

    }

    return ans;


}
