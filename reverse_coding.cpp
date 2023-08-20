// Problem Link - https://www.codingninjas.com/studio/problems/art-of-reversing_893306?leftPanelTab=0
#include <bits/stdc++.h> 
vector<vector<int>> ninjaCity(vector<vector<int>> &mat)
{
    //write your code here
    int rows = mat.size();
    int cols = mat[0].size();

    for (int i=0;i<rows;i++){
        reverse(mat[i].begin(), mat[i].end());
    }

    return mat;
}
