//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function Template for C++
class Solution
{
    public:
    string reverseWord(string str)
    {
        // Your code goes here
        // int s = 0;
        // int e = str.length();
        
        // for(int i=0; i<str.length()-1; i++)
        // {
        //     swap(str[s],str[e]);
        //     s++;
        //     e--;
        // }
        
        // return str;
        
        reverse(str.begin(),str.end());
        return str;
    }
};



//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
    	string s;
    	cin >> s;
    	Solution ob;
    	cout << ob.reverseWord(s) << endl;
	}
	return 0;
	
}


// } Driver Code Ends