class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
        int maxSum=0;
        int left=0;
        for(int j=k; j<nums.size(); j++)
        {
            left = max(left,nums[j-k]);
            maxSum = max(maxSum,nums[j]+left);
        }
        return maxSum;
    }
};