// Problem Link - https://leetcode.com/problems/trapping-rain-water/description/
class Solution {
public:
    int trap(vector<int>& height) {
  // Initialize variables.
  int n = height.size();
  int arr1[n];
  int arr2[n];

  // Initialize the first elements of the arrays.
  arr1[0] = height[0];
  arr2[n - 1] = height[n - 1];

  // Iterate through the array from left to right, updating the next greater heights array.
  for (int i = 1; i < n; i++) {
    int temp1 = height[i];
    int temp2 = arr1[i - 1];
    int ans = max(temp1, temp2);
    arr1[i] = ans;
  }

  // Iterate through the array from right to left, updating the previous greater heights array.
  for (int i = n - 2; i >= 0; i--) {
    int temp1 = height[i];
    int temp2 = arr2[i + 1];
    int ans = max(temp1, temp2);
    arr2[i] = ans;
  }

  // Calculate the amount of water that can be trapped.
  int water = 0;
  for (int i = 1; i < n - 1; i++) {
    water += min(arr1[i], arr2[i]) - height[i];
  }

  // Return the amount of water that can be trapped.
  return water;
}
};
