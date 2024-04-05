 // Function to check if given number n is a power of two.
    bool isPowerofTwo(long long n){
        int count=0;
        while(n>=1 ){
        if((n&1)==1){
           count++;
        }
         n>>=1;
        }
        return count==1?true:false;
    }