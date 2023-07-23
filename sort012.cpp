// Problem Link - https://www.codingninjas.com/studio/problems/sort-0-1-2_631055
#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Write your code here
   int l = 0 , m = 0 , h = n - 1;
   while (m <= h) {
      if (arr[m] == 1) m++;
      else if (arr[m] == 0) swap(arr[l++] , arr[m++]);
      else swap (arr[h--],arr[m]);
   }
}
