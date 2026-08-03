class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int n=nums[nums.size()/2];
        int count=0;
        for(int i=0 ;i<nums.size(); i++)
        {
            if(nums[i]==n)
            {
                count++;
            }
        }
        if(count==1)
        {
            return true;
        }
        return false;
    }
};