class Solution {
public:
    int firstUniqChar(string s) {
    
    int count[256];
    fill(count,count+256,-1);
    int n=s.length();
    for(int i=0;i<n;i++){

        if(count[s[i]]==-1)
          count[s[i]]=i;
        else
          count[s[i]]= -2;
      }

      int res=INT_MAX;
      for(int i=0;i<256;i++){
        if(count[i]>=0)
          res=min(res,count[i]);     
      }

      return (res==INT_MAX)?-1:res;
}
};