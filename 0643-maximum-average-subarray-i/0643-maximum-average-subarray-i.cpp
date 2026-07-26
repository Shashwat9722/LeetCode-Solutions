class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum=0;
        double avgSum;
        double maxAvgSum;
        for(int i=0; i<k; i++){
            sum+=nums[i];
        }
        avgSum=sum/k;
        maxAvgSum=avgSum;
        for(int i=0; i<nums.size()-k; i++){
            sum = sum - nums[i] + nums[i+k];
            avgSum = sum/k;
            maxAvgSum=max(maxAvgSum,avgSum);
        }
        return maxAvgSum;
    }
};