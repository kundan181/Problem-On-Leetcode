//{ Driver Code Starts
// C++ program to remove recurring digits from
// a given number
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
    

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        
       //store n-1 elem as leader of array
       int max = a[n-1];
       //declare the vector
       vector<int> v;
       v.push_back(max);
       //traverse the array from last
       for(int i=n-2; i>=0; --i)
       {
           if(a[i]>=max){
               v.push_back(a[i]);
               max = a[i];
           }
       }
        reverse(v.begin(),v.end());
       return v;
    }
};

//{ Driver Code Starts.

int main()
{
   long long t;
   cin >> t;//testcases
   while (t--)
   {
       long long n;
       cin >> n;//total size of array
        
        int a[n];
        
        //inserting elements in the array
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }
        Solution obj;
        //calling leaders() function
        vector<int> v = obj.leaders(a, n);
        
        //printing elements of the vector
        for(auto it = v.begin();it!=v.end();it++){
            cout << *it << " ";
        }
        
        cout << endl;

   }
}

// } Driver Code Ends