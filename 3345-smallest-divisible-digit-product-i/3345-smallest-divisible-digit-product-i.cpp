class Solution {
public:
    int smallestNumber(int n, int t) {
        int p=1;
        while(p%t!=0)
        {
            int k=n;
            p=1;
            while(k!=0)
            {
                p*=(k%10);
                k/=10;
            }
            if(p%t==0)
            {
                return n;
            }
            else
            {
                n++;
            }
        }
        return n;
    }
};