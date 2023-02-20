//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
   private:
   int maxElem(int A[], int N)
   {
       	int maxi =INT_MIN;
    	for(int i=0; i<N; i++)
    	{
    	    if(A[i] > maxi){
    	        maxi = A[i];
    	    }
    	}
       return maxi;
   }
   private:
   int minElem(int A[], int N)
   {
       	int min =INT_MAX;
    	for(int i=0; i<N; i++)
    	{
    	    if(A[i] < min){
    	        min = A[i];
    	    }
    	}
       return min;
   }
   public:
    int findSum(int A[], int N)
    {
    	//code here.
        int ma = maxElem(A,N);
        int mi = minElem(A,N);
        
        int sum = ma + mi;
        return sum;
    }

};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	      cin>>arr[i];
	    Solution ob;  
	    int ans=ob.findSum(arr, n);
	    cout<<ans;
	    cout<<"\n";
	}
	return 0;
}

// } Driver Code Ends