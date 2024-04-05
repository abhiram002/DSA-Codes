#include <bits/stdc++.h>

using namespace std;


string solve(string input){
    string answer;
    for(int i=0;i<input.size();i++){
        if(input[i] == '(' || input[i] == ')')
           {
            continue;
           }
           else{
            answer=answer+input[i];
           }
    }
    return answer;
}


int main() {

  string input1 = "a+((b-c)+d)";
  string input2 = "(((a-b))+c)";
  
  
  cout<<"Original String: "<<input1<<endl;
  cout<<"After removing brackets: "<<solve(input1)<<endl;
  cout<<"Original String: "<<input2<<endl;
  cout<<"After removing brackets: "<<solve(input2)<<endl;
}