int gameOfXor(int n , int arr[]) {
        // code here
         int val = 0;
      for(int i = 0 ; i<n;i++)
      {
          int tt = (i+1)*(n-i);  // this means that how many times a particular val is comming in subaarays
          if(tt&1) // if occurance is odd then do it
              val = val^arr[i];
      }
      return val;
    }
