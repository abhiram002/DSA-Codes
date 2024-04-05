//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) {
	    // code here
	    vector<int>pos;
	    vector<int>neg;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]>=0)
	        {
	            
	            pos.push_back(arr[i]);
	        }
	        else if(arr[i]<0)
	        {
	            neg.push_back(arr[i]);
	        }
	    }
	    int i=0,j=0,k=0;
	     while(i<pos.size() and j<neg.size())
	    {
	        if(k%2==0)
	        {
	            arr[k++]=pos[i++];
	            
	        }
	        else
	        {
	            arr[k++]=neg[j++];
	            
	        }
	    }
	    while(i<pos.size())
	    {
	        arr[k++]=pos[i++];
	    }
	    while(j<neg.size())
	    {
	         arr[k++]=neg[j++];
	            
	    }
	}
};