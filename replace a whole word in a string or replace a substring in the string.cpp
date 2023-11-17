//////////////////////OWN CODE///////////////////
#include<iostream>
#include<string.h>
using namespace std;
int startindex(string str,string str1, string str2,int len,int len1, int len2){
    int count=0;
    for(int i=0;i<len;i++){
        int k =i;
        for(int j=0;j<len2;j++){
            if(str[i]==str1[j]){
            i++;
            count++;
            if(count==len2){
                return k;
            }
            }
            else{
                i=k;
                break;
            }
        }
        
    }
return -1;
}
void replace(string str,string str1, string str2,int len,int len1, int len2){
      int k=startindex(str,str1,str2,len,len1,len2);
      string s;
      int m=0;
      for(int i=0;i<k;i++){
          s=s+str[i];
      }
      for(int j=k;j<k+len2;j++){
          s=s+str2[j-k];
      }
      for(int l=k+len2+1;l<len;l++){
          s=s+str[l];
      }
    
    
 cout<<s;
}
  

int main(){
    string str="prep insta word";
    int len,len1,len2;
    len=str.length();
    string str1="insta";
    len1=str1.length();
    string str2="ster";
    len2=str2.length();

  replace(str,str1,str2,len,len1,len2);
    
    return 0;
}
