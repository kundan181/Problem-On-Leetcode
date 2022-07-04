class Solution {
public:
    int reverse(int x) {
        long long int num;
        
        if(x==-2147483648)
            return 0;
        if(x<0)
            num=x*-1;
        else
            num=x;
        int d=0;
        long long int rev=0;
        
        while(num>0)
        {
            d=num%10;
            rev=(rev*10)+d;
            num/=10;
        }
        
        num=rev;
        
        if(num<-1*(pow(2,31)) || num>(pow(2,31))-1)
            return 0;
        
        if(x<0)
            return num*-1;
        else
            return num;
    }
};