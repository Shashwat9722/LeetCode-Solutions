class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> arr;
        unordered_map<int,int> mp;
        for(int i=0; i<nums.size();i++){
            mp[nums[i]]=i;
        }
        for(int i=1; i<=nums.size(); i++){
            auto it=mp.find(i);
            if(it==mp.end()){
                arr.push_back(i);
            }
        }
        return arr;
    }
};