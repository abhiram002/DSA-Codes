int main()
{
     int n=9;
        int count=0;
        while(n>=1 ){
        if((n&1)==1){
           count++;
        }
         n>>=1;
        }
       cout<< count;
}