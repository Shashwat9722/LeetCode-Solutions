class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0;
        for(int x:nums)
        {
            sum+=x;
        }
        int n= ((nums.size())*(nums.size()+1))/2;
        return n-sum;
    }
};