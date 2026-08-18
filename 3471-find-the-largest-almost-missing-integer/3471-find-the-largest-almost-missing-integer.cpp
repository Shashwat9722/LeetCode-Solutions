class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int ans=-1;
        for(int x:nums)
        {
            mp[x]++;
        }
        if(k==nums.size())
        {
            return *max_element(nums.begin(),nums.end());
        }
        else if(k==1)
        {
            for(int x:nums)
            {
                if(mp[x]==1)
                {
                    ans=max(ans,x);
                }
            }
            return ans;
        }
        else
        {
            if(mp[nums[0]]==1)
            {
                ans=max(ans,nums[0]);
            }
            if(mp[nums[nums.size()-1]]==1)
            {
                ans=max(ans,nums[nums.size()-1]);
            }
        }
        return ans;
    }
};