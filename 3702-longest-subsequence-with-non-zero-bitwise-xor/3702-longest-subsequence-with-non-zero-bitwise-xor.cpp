class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int xorSum=0;
        if (*max_element(nums.begin(), nums.end()) == 0)
        {
            return 0;
        }
        for(int x:nums)
        {
            xorSum ^= x;
        }
        int n=nums.size();
        if(xorSum!=0)
        {
            return n;
        }
        else
        {
            for(int i=nums.size(); i>=0; i--)
            {
                if(i==0)
                {
                    n--;
                }
                else
                {
                    return n-1;
                }
            }
        }
        return n;
    }
};