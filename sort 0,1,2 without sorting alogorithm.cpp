class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // code here 
        int z=0,o=0,t=0;
        for(int i=0;i<n;i++){
            if(a[i]==1){
                o++;
            }
            else if(a[i]==0){
                z++;
            }
            else{
                t++;
            }
            
        }
    

        //int c=0;
        for(int i=0;i<z;i++){
             a[i]=0;
        
        }
        for(int i=z;i<o+z;i++){
              a[i]=1;
        }
        for(int i=o+z;i<n;i++){
            a[i]=2;
        }
        /*for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }*/
    }
    
};