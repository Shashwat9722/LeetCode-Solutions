class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0;
        int product=1;
        int b=n;
        while(n>0)
        {
            int a=n%10;
            sum+=a;
            product*=a;
            n/=10;
        }
        if(b%(sum+product)==0)
        {
            return true;
        }
        return false;
    }
};