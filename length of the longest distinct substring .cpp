int longestSubstrDistinctChars (string S)
{
    
   
    int str[256]={0};
    int l=0;
    int r=0;
    int ans=0;
    
    while(r <S.length()){
        str[S[r]]++;
       
    while (str[S[r]]>1){
       str[S[l]]--;
       l++;
    }
    
     ans=max(ans,r-l+1);
    r++;
    
 }
 return ans;
}