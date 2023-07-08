// Problem Link - https://practice.geeksforgeeks.org/problems/find-triplets-with-zero-sum/1
bool findTriplets(int arr[], int n)
    { 
        //Your code here
        sort(arr,arr+n);
        for(int i=0;i<n;i++){
            int j=i+1, k=n-1;
            while(j<k){
                int sum=arr[i]+arr[j]+arr[k];
                if(sum==0) return true;
                else if(sum<0) j++;
                else k--;
            }
        }
        return false;
    }
