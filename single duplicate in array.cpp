int ans = 0;

// XOR all the elements in the array
for(int i = 0; i < arr.size(); i++) {              //each integer is in the range [1, n] inclusive. n=7 ex; 1,2,3,3,6,7,4
         ans = ans ^ arr[i];                                        // so xor these arr elements with 1-->n-1 numbers 
       }                                          // then  1,2,3,3,6,7,4  XOR 1,2,3,4,5,6,7.....1 cancels 1=0,1 cancels 1=0,2 cancels 2=0,3 cancels 3=0,
   / XOR numbers from 1 to n-1
for(int i = 1; i < arr.size(); i++) {
    ans = ans ^ i;
}

return ans;                                              //  4 cancels 4=0,5 cancels 5=0,6 cancels 6=0,7.....etc then one more element "3" is there in array 
                                                   //   then ans=0 therefore 0 XOR 3= 3  ,then ans=3 which is duplicate



