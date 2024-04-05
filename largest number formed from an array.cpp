//User function template for C++
class Solution{
public:
	// The main function that returns the arrangement with the largest value as
	// string.
	// The function accepts a vector of strings
	
	static bool comp(string a,string b){
	    return (a+b)>(b+a);
	}
	string printLargest(vector<string> &arr) {
	    string ans="";
	    sort(arr.begin(),arr.end(),comp);
	    for(int i=0;i<arr.size();i++){
	        ans+=arr[i];
	    }
	    return ans;
	}
};