
#include<bits/stdc++.h>

using namespace std;
int main()
{
    string s="abhiram is a good boy";
    s=s+" ";
    string str="";
   stack<string> st ;
   string ans="";
   for(int i=0;i<s.length();i++){
       if(s[i]==' '){
           st.push(str);
           str="";
       }
       else{
           str=str+s[i];
       }
       }
       while(st.size()!=1){
           ans=ans+st.top()+" ";
           st.pop();
       }
       ans=ans+st.top();
       cout<<ans;
       return 0;
   }
    
