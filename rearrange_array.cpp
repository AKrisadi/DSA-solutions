#include <bits/stdc++.h> 
void rearrangeArray(int arr[], int n)
{
	// Write your code here
	 int B[n];

    for(int i=0;i<n;i++){

        B[i]=arr[arr[i]];

        

    }

    for(int i=0;i<n;i++){

        arr[i]=B[i];

    }
}
