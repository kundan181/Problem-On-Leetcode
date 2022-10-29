//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        // Complete the function
       unordered_map<int,int> m;
       int pSum = 0;
       int result=0;
       
       for(int i=0; i<N; i++)
       {
           pSum +=A[i];
           
           if(pSum == K)
            
            result = max(result,i+1);
            
            if(m.find(pSum-K) != m.end())
            result = max(result,i-m[pSum-K]);
            
            if(m.find(pSum) == m.end()){
                m[pSum] = i;
            }
       }
       return result;
    } 
};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends