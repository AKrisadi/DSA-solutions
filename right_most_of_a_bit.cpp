int posOfRightMostDiffBit(int m, int n)
    {
        // Your code here
        int p=m^n;
        int x=1;
        while(x<=p){
            if(x&p) return log2(x)+1;
            x=x*2;
        }
        return -1;
    }
