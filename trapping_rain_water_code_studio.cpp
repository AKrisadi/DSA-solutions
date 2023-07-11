// Problem Link - https://www.codingninjas.com/studio/problems/trapping-rainwater_630519?leftPanelTab=0
long long getTrappedWater(long long* arr, int n) {
    // Write your code here.
    long l = 0, r =n-1;

    long leftmax =0, rightmax=0;

    long totalwater=0;

 

    while(l<=r){

      if (arr[l] <= arr[r]) {

        if (arr[l] >= leftmax)

          leftmax = arr[l];

        else

          totalwater += leftmax - arr[l];

        l++;

      } else {

        if (arr[r] >= rightmax)

          rightmax = arr[r];

        else

          totalwater += rightmax - arr[r];

        r--;

      }

    }

    return totalwater;
}
