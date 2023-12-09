class Solution {
  public:
    int sumOfDigitsOfNum(int m){
        int sumOfDigits=0;
        while(m){
            sumOfDigits+=m%10;
            m/=10;
        }
        return sumOfDigits;
    }
    int smithNum(int n) {
        // code here
        int m=n;
        map<int,int> primeFactors;
        while(n%2==0){
            primeFactors[2]++;
            n/=2;
        }
        for(int i=3;i<=sqrt(n);i+=2){
            while(n%i==0){
                n/=i;
                primeFactors[i]++;
            }
        }
        if(n>2)primeFactors[n]++;
        if(primeFactors.size()==1 && (*primeFactors.begin()).second==1)return 0;//non prime
        int sumOfPrimeFactors=0;
        for(auto it:primeFactors){
            sumOfPrimeFactors += sumOfDigitsOfNum(it.first)*it.second;
        }
        return sumOfPrimeFactors==sumOfDigitsOfNum(m);
    }
};
