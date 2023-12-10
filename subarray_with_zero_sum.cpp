bool subArrayExists(int arr[], int n)
    {
        //Your code here
        set<int>st;
        st.insert(0);
        st.insert(arr[0]);
        
        for(int i=1;i<n;i++)
        {
            if(st.find(arr[i-1]+arr[i])==st.end())
            {
                arr[i]=arr[i-1]+arr[i];
                // cout<<arr[i]<<endl;
                st.insert(arr[i]);
            }
            else{
                return true;
            }
        }
        return false;
    }
