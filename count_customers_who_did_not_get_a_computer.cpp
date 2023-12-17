#include <bits/stdc++.h> 
int countCustomers(vector<int> &arr, int k)
{
    //    Write your code here
     vector<int>v(arr.size(),0);

    int res = 0;

    for(int i=0;i<arr.size();i++){

        if(v[arr[i]-1]==0 && k>0)

            v[arr[i]-1] = 1, k--;

        else if(v[arr[i]-1] == 1)

            v[arr[i]-1] = 0, k++;

        else if(v[arr[i]-1]==0 && k<=0)

            v[arr[i]-1] = -1;

        else if(v[arr[i]-1]==-1)

            res++;

    }

    return res;
}
