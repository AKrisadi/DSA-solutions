int minNumber(int arr[],int N)
    {
        int sum=0;
        for(int i=0;i<N;i++)
        {
            sum+=arr[i];
        }
        int ts=sum;
        if(ts==1)
        return 1;
        while(true)
        {
            if(prime(sum))
            break;
            sum++;
        }
        return sum-ts;
    }
    bool prime(int x)
    {
        for(int i=2;i*i<=x;i++)
        {
            if(x%i==0)
            return false;
        }
        return true;
    }
