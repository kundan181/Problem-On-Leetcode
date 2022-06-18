// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

bool kPangram(string str, int k);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin.ignore();
        string str;
        getline(cin,str);
        int k;
        cin>>k;
        cout<<kPangram(str,k)<<endl;
    }
    return 0;
}// } Driver Code Ends


bool kPangram(string str, int k)
{
    // code here 
    int m[26] = {0};
   for(int i=0; i<str.size(); i++) {
          m[str[i] - 'a']++;
   }
   int count = 0, present = 0;
   for(int i=0; i<26; i++) {
       if(m[i] == 0) {
           count++;
       }
       else if(m[i] > 0) {
           present+= m[i];
       }
   }
   if(count <= k && present >= 26) {
       return true;
   }
   return false;

}