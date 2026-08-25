class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int lproduct=1;
        vector<int> arr(nums.size());
        for(int i=0; i<nums.size(); i++)
        {
            arr[i]=lproduct;
            lproduct*=nums[i];
        }
        int rproduct=1;
        for(int i=nums.size()-1; i>=0; i--)
        {
            arr[i]=arr[i]*rproduct;
            rproduct*=nums[i];
        }
        return arr;
    }
};