class Solution {
public:
   int check(string &s,int i,int j){
    while(i>=0 && j<s.length() && s[i]==s[j]){
        i--;
        j++;
    }
    return j-i-1;
}
//total 2*n -1 cases
//we check fro symmetry at exh index and calculate palindrome about that point
//then calculate maximum
string longestPalindrome(string s) {
    int ans=INT_MIN;
    int idx=0;
    for(int i=0;i<s.length();i++){
        int ans1=max(check(s,i,i),check(s,i,i+1));
        if(ans1>ans){
            idx=i;
            ans=ans1;
        }
       
        
    }
    //diff for odd and even cases
	//for ex ans is 9 and idx =4 we will start string from 0 i.e 4-(9-1)/2 
	//for ex ans is 10 and idx =4 we will start string from 0 i.e 4-(10-1)/2
	
    return s.substr(idx-(ans-1)/2,ans);

}
};

