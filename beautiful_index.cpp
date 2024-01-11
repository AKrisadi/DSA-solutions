#include <bits/stdc++.h> 
int beautifulIndex(int N, vector<int> A)
{
	// Write your code here.
	 int rsum=0 , lsum=0;

       for(int i=0;i<N;i++)

       {

           rsum+=A[i];

       }

       for(int i=0;i<N;i++)

       {

             rsum-=A[i];

           if(lsum==rsum)

           {

               return i+1;

           }

               lsum+=A[i];

       }

         return -1;
}
