class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<char,int> mp;
        int ans=INT_MIN;
        int right=0;
        int left =0;
        while(right<s.size())
        {
            mp[s[right]]++;
            while(mp[s[right]]>2)
            {
                mp[s[left]]--;
                left++;
            }
            ans=max(ans,right-left+1);
            right++;
        }
        return ans;
    }
};