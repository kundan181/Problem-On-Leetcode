// { Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


 // } Driver Code Ends
/*Complete the function below*/

class Solution {
public:

    bool checkPalindrome(int x)
    {
        string r = to_string(x);
        for(int i=0; i<r.size()/2; i++)
        {
            if(r[i]!=r[r.size()-i-1])
            {
                return false;
            }
        }
        return true;
    }
    int PalinArray(int a[], int n)
    {
    	// code here
    	for(int i=0; i<n; i++)
    	{
    	    if(!checkPalindrome(a[i]))
    	    {
    	        return false;
    	    }
    	}
    	return true;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}  // } Driver Code Ends