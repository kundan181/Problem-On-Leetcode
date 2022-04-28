// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
    vector<int> candyStore(int a[], int n, int k)
    {
        // for 1 max pop k min in getting the max amount of money , reverse these in case of min amount of money
        int maxv=0,minv=0;
        
        int l=0,r=n-1;
        //first sort the array
        sort(a,a+n);
        //move left pointer one time 
        //move right pointer k times
        //first get the max amount
        while(l<=r)
        {
            maxv+=a[r--];
            l=l+k;
        }
        // if(r>=0)
        //     maxv+=a[r];
        l=0,r=n-1;
        while(l<=r)
        {
            minv+=a[l++];
            r=r-k;
        }
        // if(l<n)
        //     minv+=a[l];
        return {minv,maxv};
        
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        int candies[N];

        for (int i = 0; i < N; i++)
        {
            cin >> candies[i];
        }

        Solution ob;
        vector<int> cost = ob.candyStore(candies, N, K);
        cout << cost[0] << " " << cost[1] << endl;
    }
    return 0;
}  // } Driver Code Ends