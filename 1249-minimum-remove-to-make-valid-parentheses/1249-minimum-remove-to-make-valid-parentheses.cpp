class Solution {
public:
     string minRemoveToMakeValid(string s) {
        stack<int> st;
       for(int i=0; i<s.length(); i++)
       {
           char ch=s[i];
           if(ch>='a' && ch<='z')
                continue;
           else if(ch=='(')
                  st.push(i);
           else if(ch==')')
           {
               if(st.empty())
               {
                   s[i]='.';
               }
               else
                   st.pop();
           }
       }
        
         while(!st.empty())
       {
           s[st.top()]='.';
             st.pop();
       }
        
        string ans;
       
        for(char ch:s)
        {
            if(ch=='.')
                continue;
            else
                ans += ch;
        }
        return ans;
    }   

};
