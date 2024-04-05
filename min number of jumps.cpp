// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
        int maxR = arr[0];
        int step = arr[0];
        int jump = 1;
        if(n==1){
            return 0;
        }
        else if(arr[0] == 0){
            return -1;
        }
        else{
            for(int i=1; i<n; i++){
                if(i == n-1){
                    return jump;
                }
                maxR = max(maxR, i+arr[i]);
                step--;
                if(step == 0 ){
                    jump++;
                step = maxR - i;
                }
        }
    }
    }
};
