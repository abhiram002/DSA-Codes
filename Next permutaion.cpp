class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int indx1;
        int indx2=0;
        if(nums.size()==1){
            return;
        }
        for(int i=nums.size()-2;i>=0;i--){                //step1
            if(nums[i]<nums[i+1]){
                indx1=i;
                break;
            }
        }
        if(indx1<0){                                      //step1.1
            reverse(nums.begin(),nums.end());
        }
         else{
             for(int i=nums.size()-1;i>0;i--)              
             {
                if(nums[i]>nums[indx1])                   //step 2
                {
                    indx2=i;
                    break;
                }

             }
             swap(nums[indx1],nums[indx2]);                //step 3
              sort(nums.begin()+indx1+1,nums.end());       //step 4

         }

        }
        
    
};