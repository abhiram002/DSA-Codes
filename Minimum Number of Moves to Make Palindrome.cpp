public:
    int minMovesToMakePalindrome(string s) {
        int n=s.size();
          int rt=n-1;
            int lt=0;
            int ans=0;
            
            while (lt<rt){
               
                    int r=rt;
                    int l=lt;
                    while(s[l]!=s[r]){
                      r--;
                    }
                    if(l==r){
                     swap(s[r],s[r+1]);
                         ans++;
                            continue;
                    }
                    else{
                       while(r<rt){
                        swap(s[r],s[r+1]);
                               ans++;
                               r++;
                       }
                    }
                    lt++;
                    rt--;
                    
            }
            return ans;
    }     
    