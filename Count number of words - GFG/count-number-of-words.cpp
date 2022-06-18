// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int countWords(string s);
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	    {
	        string s;
	        getline(cin,s);
	        cout<<countWords(s)<<endl;
	    }
}// } Driver Code Ends


//User function Template for C++

int countWords(string s)
{
    //code here.
    int res = 0;
    
    for(int i = 0; i < s.size(); i++)
    {
        if(isalpha(s[i]))
        {
            res++;
        }
        
        while(i < s.size() and isalpha(s[i]))
        {
            i++;
        }
        
        if(i < s.size() and s[i] == '\\')
        {
            i++;
        }
    }
    
    return res;
    
}